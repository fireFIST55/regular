#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>adj[n + 1], degree(n + 1), dp(n + 1);
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }

    vector<int>sze(n + 1);
    function<void(int u, int parent)>dfs = [&](int u, int parent){
        int sm = 0; sze[u] = 1;
        for(int v: adj[u]){
            if(v != parent){
                dfs(v, u);
                sze[u] += sze[v]; sm += dp[v];
            }
        }

        for(int v: adj[u]){
            if(v != parent){
                dp[u] = max(dp[u], sze[v] - 1 + sm - dp[v]);
            }
        }
    };

    dfs(1, 0);

    cout << dp[1] << '\n';
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