#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>ppl(n), index(n), adj[n + 5];
    pair<int, int>khela[n + 5];
    for(int &i: ppl) cin >> i;
    for(int &i: index) cin >> i;
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }
    bool yes = 1;
    function<void(int u, int parent)>dfs = [&](int u, int parent){
        int happy = 0, sad = 0;
        if(!yes) return;
        for(int v: adj[u]){
            if(v == parent) continue;
            dfs(v, u);
            happy += khela[v - 1].first; sad += khela[v - 1].second;
        }
        if(happy - sad != index[u - 1]){
            int nwhappy = (ppl[u - 1] + index[u - 1]) / 2;
            if(nwhappy < happy) yes = 0;
            happy = nwhappy; sad = ppl[u - 1] - happy;
        }
        if(happy + sad > m) yes = 0;
        khela[u] = {happy, sad};
    };
    dfs(1, - 1);
    cout << (yes?"YES\n": "NO\n");
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