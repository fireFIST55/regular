#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool found = 0;
    int n, q; cin >> n >> q;
    vector<int>size(n + 5), sub[n + 5], adj[n + 5];
    for(int i = 2; i <= n; i += 1){
        int sup; cin >> sup;
        adj[i].push_back(sup); adj[sup].push_back(i); 
    }

    function<void(int, int)> dfs = [&](int u, int parent){
        set<int>khela; size[u] = 1;
        for(int v: adj[u]){
            if(v != parent){
                dfs(v, u);

                khela.insert(v); size[u] += size[v];
            }
        }

        for(auto it = khela.begin(); it != khela.end(); it++){
            int x = *it;
            sub[u].push_back(x);
        }
    };

    dfs(1, 0);
    vector<int>khela, index(n + 5); khela.emplace_back(1);

    function<void(int)>dfss = [&](int u){
        for(int v: sub[u]){
            khela.emplace_back(v); dfss(v);
        }
    };
    dfss(1);
    for(int i = 0; i < khela.size(); i += 1) index[khela[i]] = i;

    while(q--){
        int u, k; cin >> u >> k;
        if(size[u] < k) cout << - 1 << '\n';
        else cout << khela[index[u] + k - 1] << '\n';
    }
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