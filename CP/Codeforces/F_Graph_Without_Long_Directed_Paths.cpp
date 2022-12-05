#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, root; cin >> n >> m;
    vector<pair<int, int>>vp, adj[n + 5];
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v; vp.emplace_back(u, v); root = u;
        adj[u].emplace_back(v, i); adj[v].emplace_back(u, i);
    }
    
    int curr = 1;
    vector<int>vis(n + 5), color(n + 5), ans(n + 5);
    deque<int>khela; khela.push_back(root); color[root] = vis[root] = 1;
    while(!khela.empty()){
        int m = khela.size();
        for(int i = 0; i < m; i += 1){
            int u = khela.front(); khela.pop_front();
            for(pair<int, int>pi: adj[u]){
                int v = pi.first, nm = pi.second;
                if(vis[v]){
                    if(color[v] != (curr ^ 1)){
                        cout << "NO\n";
                        return;
                    }
                }
                else{
                    khela.push_back(v);
                    vis[v] = 1; color[v] = curr ^ 1; ans[nm] = curr?u: v;
                }
            }
        }

        curr = curr ^ 1;
    }

    string s;
    cout << "YES\n";
    for(int i = 0; i < m; i += 1){
        if(ans[i] == vp[i].first) s += '1';
        else s += '0';
    }
    cout << s << '\n';
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