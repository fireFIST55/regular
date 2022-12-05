#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>>adj[n + 5];
    for(int i = 0; i < n - 1; i += 1){
        int u, v, w; cin >> u >> v >> w; adj[u].emplace_back(v, w); adj[v].emplace_back(u, w);
    }

    int far = 0, mx1 = INT_MIN, mx2 = INT_MIN;
    function<void(int u, int parent, int dis, bool first)>dfs = [&](int u, int parent, int dis, bool first){
        for(pair<int, int> pi: adj[u]){
            if(pi.first == parent) continue;
            if(first && pi.second + dis > mx1){
                mx1 = pi.second + dis; far = pi.first;
            }
            if(!first && pi.second + dis > mx2){
                mx2 = pi.second + dis;
            }
            dfs(pi.first, u, dis + pi.second, first);
        }
    };
    dfs(0, - 1, 0, 1); dfs(far, -1, 0, 0);
    cout << mx2 << '\n'; 
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i += 1){
        cout << "Case " << i << ": "; solve();
    }
    
    return 0;
}