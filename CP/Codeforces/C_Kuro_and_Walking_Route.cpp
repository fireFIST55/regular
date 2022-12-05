#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int>vis(n + 1), subtree(n + 1), check(n + 1), adj[n + 1];
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    function<int(int)>dfs = [&](int u){
        vis[u] = 1; subtree[u] = 1;
        if(u == x) check[u] = 1;
        else check[u] = 0;

        for(int v: adj[u]){
            if(!vis[v]){
                subtree[u] += dfs(v);
                check[u] |= check[v];
            }
        }

        return subtree[u];
    };

    dfs(y);

    ll rest = 0;
    for(int v: adj[y]){
        if(check[v]){
            rest = subtree[y] - subtree[v];
            break;
        }
    }

    ll ans = (ll)(n*(n - 1)) - (ll)subtree[x]*rest;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}