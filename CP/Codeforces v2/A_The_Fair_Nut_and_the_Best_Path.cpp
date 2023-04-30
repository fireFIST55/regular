#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>ans(n + 5), fuel(n + 5);
    vector<pair<int, ll>>adj[n + 5];
    for(int i = 1; i <= n; i += 1) cin >> fuel[i];
    for(int i = 0; i < n - 1; i += 1){
        int u, v, c; cin >> u >> v >> c;
        adj[u].emplace_back(v, c); adj[v].emplace_back(u, c);
    }
    ll res = fuel[1];
    function<void(int u, int parent)> dfs = [&](int u, int parent){
        ans[u] = fuel[u]; res = max(res, ans[u]);
        for(pair<int, int>pi: adj[u]){
            if(pi.first == parent) continue;
            dfs(pi.first, u); ans[u] = max(ans[u], ans[u] + ans[pi.first] - (ll)pi.second);
            res = max(res, ans[u]);
        }
    };
    ans[1] += fuel[1];
    dfs(1, - 1);
    cout << res << '\n';
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