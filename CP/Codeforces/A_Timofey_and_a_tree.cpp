#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>color(n + 1), adj[n + 1];
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }
    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        color[i] = a;
    }

    int root1, root2;
    function<bool(int, int parent)>dfs = [&](int u, int parent){
        bool curr = 0;
        for(int v: adj[u]){
            if(curr) break;
            if(v == parent) continue;
            if(color[v] != color[u]){
                root1 = u, root2 = v; curr = 1; break;
            }
            curr |= dfs(v, u);
        }

        return curr;
    };

    function<bool(int, int parent, bool r1)>dfss = [&](int u, int parent, bool r1){
        bool curr = 0;
        for(int v: adj[u]){
            if(curr) break;
            if(v == parent) continue;
            if(color[v] != color[u] && ((r1 && u != root1) || (!r1 && u != root2))){
                curr = 1; break;
            }

            curr |= dfss(v, u, r1);
        }

        return curr;
    };

    color[0] = color[1];
    if(dfs(1, 0)){
        if(!dfss(root1, 0, 1)) cout << "YES\n" << root1 << "\n";
        else if(!dfss(root2, 0, 0)) cout << "YES\n" << root2 << "\n";
        else cout << "NO\n";
    }
    else cout << "YES\n1\n";
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