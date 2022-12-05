#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 2e5 + 5;
vector<int>adj[M], depth(M), sze(M), option(M);

int dfs(int u, int v){
    depth[u] = depth[v] + 1; sze[u] = 1;
    for(int i: adj[u]){
        if(i != v) sze[u] += dfs(i, u);
    }

    option[u] = - depth[u] + sze[u]; return sze[u];
}

void solve(){
    int n, k; cin >> n >> k;

    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }

    dfs(1, 0);
    sort(option.begin(), option.end(), greater<int>());

    ll ans = 0;
    for(int i = 1; i <= n - k; i += 1) ans += (ll)option[i];
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