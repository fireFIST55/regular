#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, root, dg = 0; cin >> n >> m;
    vector<int>degree(n + 5), seen(n + 5), adj[n + 5];

    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);

        degree[u] += 1; degree[v] += 1;
        if(degree[u] > dg){
            dg = degree[u]; root = u;
        }
        if(degree[v] > dg){
            dg = degree[v]; root = v;
        }
    }

    vector<pair<int, int>>ans;
    function<void(int u, int uu)>dfs = [&](int u, int uu){
        for(int v: adj[u]){
            if(seen[v] || v == uu) continue;
            seen[v] = - 1;
            ans.emplace_back(u, v); dfs(v, u);
        }
    };

    for(int u: adj[root]){
        seen[u] = - 1; ans.emplace_back(u, root);
    }
    for(int u: adj[root]) dfs(u, root);

    for(pair<int, int>pi: ans) cout << pi.first << " " << pi.second << '\n';
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