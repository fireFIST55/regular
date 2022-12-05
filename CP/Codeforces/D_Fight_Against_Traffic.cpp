#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, s, t;  cin >> n >> m >> s >> t; 
    vector<int>dps(n + 1), dpt(n + 1), adj[n + 1];
    map<pair<int, int>, int>ase;
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v; ase[{min(u, v), max(u, v)}] = 1;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    function<void(int, int seq)>bfs = [&](int a, int seq){
        int curr = 0;
        deque<int>dq; dq.push_back(a);
        vector<int>vis(n + 1); vis[a] = 1;

        while(!dq.empty()){
            int k = dq.size(); curr += 1;
            for(int i = 0; i < k; i += 1){
                int u = dq.front(); dq.pop_front(); vis[u] = 1;
                for(int v: adj[u]){
                    if(vis[v]) continue;

                    dq.push_back(v);
                    if(seq) dpt[v] = curr;
                    else dps[v] = curr;
                }
            }
        }
    };

    bfs(s, 0); bfs(t, 1);
    ll ans = 0, D = min(dpt[s], dps[t]);
    for(int i = 1; i <= n; i += 1){
        for(int j = i + 1; j <= n; j += 1){
            pair<int, int>pi(i, j);
            if(ase[pi]) continue;
            if(dps[i] + dpt[j] + 1 >= D && dps[j] + dpt[i] + 1 >= D) ans += (ll)1;
        }
    }

    cout << ans << '\n';
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
