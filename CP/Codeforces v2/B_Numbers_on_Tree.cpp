#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, root; cin >> n;
    vector<int>c(n + 5), values(n + 5), adj[n + 5];
    for(int i = 1; i <= n; i += 1){
        int u, v; cin >> u >> v;
        if(u) adj[u].emplace_back(i);
        else root = i;
        c[u] = v;
    }
    int curr = 0; bool yes = 1;
    function<void(int u, int parent, vector<pair<int, int>>&khela)> dfs2 = [&](int u, int parent, vector<pair<int, int>>&khela){
        for(int v: adj[u]){
            if(v == parent) continue; dfs2(v, u, khela);
            khela.emplace_back(values[v], v);
        }
    };
    function<void(int u, int parent)> dfs = [&](int u, int parent){
        if(adj[u].empty()){
            if(c[u]) yes = 0;
            else values[u] = curr++;
            return;
        }

        vector<pair<int, int>>khela;
        for(int v: adj[u]){
            if(!yes) break;
            if(v == parent) continue;
            dfs(v, u); dfs2(v, u, khela);
        }
        sort(khela.begin(), khela.end());
        if(khela.size() < c[u] || !yes) yes = 0;
        else{
            for(int i = c[u]; i < khela.size(); i += 1)
                values[khela[i].second] +=  1;
        }
    };
    dfs(root, - 1);
    if(!yes) cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i = 1; i <= n; i += 1) cout << values[i] << ' ';
        cout << '\n';
    }
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