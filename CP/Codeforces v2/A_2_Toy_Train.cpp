#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dis(int u, int v, int n){
    if(u <= v) return v - u;
    else return n - u + v;
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int>adj[n + 5], mn(n + 5, INT_MAX);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v);
    }
    for(int i = 1; i <= n; i += 1){
        for(int u: adj[i]){
            mn[i] = min(mn[i], dis(i, u, n)); 
        }
    }
    for(int i = 1; i <= n; i += 1){
        int ans = 0;
        for(int j = 1; j <= n; j += 1){
            if(!adj[j].empty()) continue;
            int curr = dis(i, j, n) + (adj[j].size() - 1) * n + mn[j];
            ans = max(curr, ans);
        }
        cout << ans << ' ';
    }
    cout << '\n';
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