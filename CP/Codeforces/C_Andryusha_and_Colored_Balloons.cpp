#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, mx = 0; cin >> n;
    vector<int>color(n + 1), adj[n + 1];
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    function<void(int, int parent)>dfs = [&](int u, int parent){
        int x = 1;
        for(int v: adj[u]){
            if(v == parent) continue;
            while(color[u] == x || color[parent] == x) x += 1;
            color[v] = x; mx = max(mx, x++); 
            dfs(v, u);
        }
    };

    color[1] = 1; color[0] = 0;
    dfs(1, 0);
    cout << mx << '\n';
    for(int i = 1; i <= n; i += 1) cout << color[i] << ' ';
    cout << '\n';
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