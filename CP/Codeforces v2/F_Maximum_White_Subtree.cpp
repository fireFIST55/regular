#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>color(n), ans(n + 5), adj[n + 5];
    for(int &i: color) cin >> i;
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }
    function<void(int u, int parent)> dfs = [&](int u, int parent){
        ans[u] = color[u - 1]?1: - 1;
        for(int v: adj[u]){
            if(v == parent) continue;
            dfs(v, u); ans[u] += max(ans[v], 0);
        }
    };
    dfs(1, - 1);

    function<void(int u, int parent)> calc = [&](int u, int parent){
        ans[u] += max(0, (parent == - 1 || ans[parent] < 0)?0: (ans[u] > 0?ans[parent] - ans[u]: ans[parent]));
        for(int v: adj[u]){
            if(v == parent) continue;
            calc(v, u);
        }
    };
    calc(1, -  1);
    for(int i = 1; i <= n; i += 1) cout << ans[i] << ' ';
    cout << '\n';
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