#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k, s; cin >> n >> m >> k >> s;
    vector<int>goods[k + 1], adj[n + 5], options[n + 5];
    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        goods[a].emplace_back(i);
    }

    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    for(int i = 1; i <= k; i += 1){
        deque<int>dq;
        vector<int>vis(n + 5);
        for(int v: goods[i]){
            dq.push_back(v); vis[v] = 1;
        }

        int cnt = 1;
        while(!dq.empty()){
            int m = dq.size();
            for(int k = 0; k < m; k += 1){
                int u = dq.front(); dq.pop_front();
                for(int v: adj[u]){
                    if(vis[v]) continue;
                    vis[v] = 1;
                    options[v].emplace_back(cnt); dq.push_back(v);
                }
            }

            cnt += 1;
        }
    }

    for(int i = 1; i <= n; i += 1){
        sort(options[i].begin(), options[i].end());
        int ans = 0;
        for(int k = 0; k < s - 1; k += 1) ans += options[i][k];
        cout << ans << ' ';
    }
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