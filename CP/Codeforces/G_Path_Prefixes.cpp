#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>a(n + 1), b(n + 1), ans(n + 1), adj[n + 5];
    for(int i = 2; i <= n; i += 1){
        ll x; cin >> x >> a[i] >> b[i];
        adj[x].emplace_back(i);
    }

    vector<ll>khela;
    function<void(ll, ll suma, ll sumb)> dfs = [&](ll u, ll suma, ll sumb){
        for(ll v: adj[u]){
            khela.emplace_back(sumb + b[v]);
            ans[v] = upper_bound(khela.begin(), khela.end(), suma + a[v]) - khela.begin();
            dfs(v, suma + a[v], sumb + b[v]);
            khela.pop_back();
        }
    };

    dfs(1, 0, 0);
    for(int i = 2; i <= n; i += 1) cout << ans[i] << ' ';
    cout << '\n';
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