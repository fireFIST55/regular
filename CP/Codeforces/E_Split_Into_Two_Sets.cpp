#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool no = 0;
    int n; cin >> n;
    vector<int>degree(n + 1), color(n + 1), vis(n + 1), adj[n + 1];
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v; degree[u] += 1; degree[v] += 1;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
        if(degree[u] > 2 || degree[v] > 2) no = 1;
    }

    function<void(int u)> dfs = [&](int u){
        vis[u] = 1;
        for(int v: adj[u]){
            if(vis[v]){
                if(color[v] == color[u])
                    no = 1;
                else continue;
            }
            if(no) break;

            color[v] = (color[u] == 1?2: 1);
            dfs(v);
        }

        if(no) return;
    };

    for(int i = 1; i <= n && !no; i += 1){
        if(vis[i]) continue;
        else{
            color[i] = 1;   dfs(i);
        }
    }
    no?cout << "NO\n": cout << "YES\n";
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