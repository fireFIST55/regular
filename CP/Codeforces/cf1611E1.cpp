#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    deque<int>dq;
    vector<int>adj[n + 1], degree(n + 1), dis(n + 1, 1e9), disR(n + 1, 1e9);

    for(int i = 0; i < k; i += 1){
        int x; cin >> x;
        dq.push_back(x); dis[x] = 0;
    }

    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[v].push_back(u); adj[u].push_back(v);
        degree[u] += 1; degree[v] += 1;
    }

    int cnt = 0;
    map<int, int>vis, viss;
    while(!dq.empty()){
        int n = dq.size(); cnt += 1;
        for(int i = 0; i < n; i += 1){
            int h = dq.front(); vis[h] = 1;
            dq.pop_front();

            for(int k = 0; k < adj[h].size(); k += 1){
                if(!vis[adj[h][k]]){
                    dq.push_back(adj[h][k]); vis[adj[h][k]] = 1;
                    dis[adj[h][k]] = min(dis[adj[h][k]], cnt);
                }
            }
        }
    }

    deque<int>dqq; cnt = 0;
    dqq.push_back(1); viss[1] = 1;
    while(!dqq.empty()){
        int n = dqq.size(); cnt += 1;
        for(int i = 0; i < n; i += 1){
            int h = dqq.front(); dqq.pop_front(); viss[h] = 1;

            for(int k = 0; k < adj[h].size(); k += 1){
                if(!viss[adj[h][k]]){
                    dqq.push_back(adj[h][k]); viss[adj[h][k]] = 1;
                    disR[adj[h][k]] = min(disR[adj[h][k]], cnt);
                }
            }
        }
    }

    for(int i = 2; i <= n; i += 1){
        if(degree[i] == 1 && disR[i] < dis[i]){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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