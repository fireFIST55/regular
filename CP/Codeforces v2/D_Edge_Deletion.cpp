#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k, cnt = 0; cin >> n >> m >> k;
    vector<ll>dis(n + 5, LONG_LONG_MAX);
    vector<int>last(n + 5, - 1), ans;
    vector<pair<int, pair<int, int>>>vp[n + 5];
    for(int i = 0; i < m; i += 1){
        int u, v, w; cin >> u >> v >> w;
        vp[u].push_back(make_pair(v, make_pair(w, i))); vp[v].push_back(make_pair(u, make_pair(w, i)));
    }
    set<pair<ll, int>>q;
    q.insert({0, 1});
    while(!q.empty() && cnt < k){
        pair<int, int>p = *q.begin(); q.erase(q.begin());
        int u = p.second;
        if(last[u] != - 1){
            cnt += 1;
            ans.emplace_back(last[u]);
        }
        for(pair<int, pair<int, int>> it: vp[u]){
            int v = it.first, index = it.second.second, cost = it.second.first;
            if(dis[u] + cost < dis[v]){
                q.erase({dis[v], v});
                dis[v] = dis[u] + cost; q.insert({dis[v], v});
                last[v] = index;
            }
        }
    }
    cout << ans.size() << '\n';
    for(int i: ans) cout << i + 1 << '\n';
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