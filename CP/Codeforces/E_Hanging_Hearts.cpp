#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>adj[n + 5];
    for(int i = 2; i <= n; i += 1){
        int a; cin >> a; adj[a].emplace_back(i);
    }
    vector<vector<int>>dp(2, vector<int>(n + 5, 0));

    function<void(int u)>khela = [&](int u){
        for(int v: adj[u]){
            khela(v);
            dp[1][u] = max(dp[1][u], dp[1][v]);
            dp[0][u] += max(dp[1][v], dp[0][v]);
        }
        dp[1][u] += 1;
    };

    khela(1);
    cout << max(dp[0][1], dp[1][1]) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}