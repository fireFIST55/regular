#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n + 1), adj[n + 5];
    vector<vector<int>>color(n + 5, vector<int>(2, 0));
    for(int i = 1; i <= n; i += 1) cin >> vc[i];
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    function<void(int u, int parent)> dfs = [&](int u, int parent){
        color[u][0] += (vc[u] == 1); color[u][1] += (vc[u] == 2);
        for(int v: adj[u]){
            if(v == parent) continue;
            dfs(v, u); color[u][0] += color[v][0]; color[u][1] += color[v][1];
        }
    };
    dfs(1, - 1);

    int ans = 0;
    function<void(int u, int parent)> khela = [&](int u, int parent){
        for(int v: adj[u]){
            if(v == parent) continue;
            int b = color[1][0] - color[v][0], r = color[1][1] - color[v][1];
            if((!color[v][0] || !color[v][1]) && (!b || !r)) ans += 1;
            khela(v, u);
        }
    };
    khela(1, - 1);
    cout << ans << '\n';
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