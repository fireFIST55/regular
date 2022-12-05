#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, x;
    cin >> n >> m;
    vector<int>ans;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < m; j += 1){
            x = max(i + j, max(i +  m - 1 - j, max(n - 1 - i + j, n - 1 - i + m - 1 - j)));
            ans.push_back(x);
        }
    }

    sort(ans.begin(), ans.end());
    for(int i: ans) cout << i << " ";
    cout << '\n';
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