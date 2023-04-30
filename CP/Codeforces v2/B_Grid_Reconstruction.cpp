#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k = 0; cin >> n;
    vector<vector<int>>ans(2, vector<int>(n, 0));
    for(int i = 0; i < n; i += 1){
        ans[k][i] = 2 * n - i; k = k ^ 1;
    }
    k = 1;
    if(n > 2) swap(ans[1][1], ans[1][n - 1]);
    for(int i = 0; i < n; i += 1){
        ans[k][i] = i + 1; k = k ^ 1;
    }
    for(int i = 0; i < 2; i += 1){
        for(int j = 0; j < n; j += 1) cout << ans[i][j] << ' ';
        cout << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}