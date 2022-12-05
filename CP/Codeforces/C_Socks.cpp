#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int>color(n + 1), vis(n + 1), adj[n + 1];
    for(int i = 0; i < n; i += 1){
        int a; cin >> a; 
        color[i + 1] = a;
    }

    vector<pair<int, int>>socks;
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        socks.emplace_back(u, v);
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    int total, mx;
    map<int, int>count;
    function<void(int, int parent)> dfs = [&](int u, int parent){
        vis[u] = 1; total += 1; mx = max(mx, ++count[color[u]]);
        for(int v: adj[u]){
            if(v == parent || vis[v]) continue;
            dfs(v, u);
        }
    };
    
    int index = 0, ans = 0;
    for(int i = 0; i < m; i += 1){
        if(vis[socks[i].first]) continue;
        mx = total = 0;
        dfs(socks[i].first, 0);
        count.clear();

        ans += (total - mx);
    }
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