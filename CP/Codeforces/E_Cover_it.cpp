#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, root; cin >> n >> m;
    vector<int>adj[n + 5], vis(n + 5), even, odd;
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v; root = u;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    deque<int>khela; khela.push_back(root);
    int height = 1; odd.emplace_back(root); vis[root] = 1;
    while(!khela.empty()){
        height += 1;
        int m = khela.size();
        for(int i = 0; i < m; i += 1){
            int u = khela.front(); khela.pop_front();
            for(int v: adj[u]){
                if(!vis[v]){
                    vis[v] = 1;
                    if(height & 1) odd.emplace_back(v);
                    else even.emplace_back(v);
                    khela.push_back(v);
                }
            }
        }
    }
    if(even.size() <= odd.size()){
        cout << even.size() << "\n";
        for(int i: even) cout << i << " ";
    }
    else{
        cout << odd.size() << '\n';
        for(int i: odd) cout << i << ' ';
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}