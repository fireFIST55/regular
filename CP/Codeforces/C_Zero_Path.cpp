#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>>khela(n, vector<int>(m)), mx(n, vector<int>(m)), mn(n, vector<int>(m));
    for(int i = 0; i < n; i += 1){
        for(int &k: khela[i]) cin >> k;
    }

    if(!((n + m) & 1)){
        cout << "NO\n"; return;
    }

    for(int i = 0; i < m; i += 1) mx[0][i] = mn[0][i] = (i?mx[0][i - 1]: 0) + khela[0][i];
    for(int i = 1; i < n; i += 1) mx[i][0] = mn[i][0] = mx[i - 1][0] + khela[i][0];

    for(int i = 1; i < n; i += 1){
        for(int j = 1; j < m; j += 1){
            mx[i][j] = max(mx[i - 1][j] + khela[i][j], mx[i][j - 1] + khela[i][j]);
            mn[i][j] = min(mn[i - 1][j] + khela[i][j], mn[i][j - 1] + khela[i][j]);
        }
    }

    if(mn[n - 1][m - 1] > 0 || mx[n - 1][m - 1] < 0) cout << "NO\n";
    else cout << "YES\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}