#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>l(n + 1), r(n + 1), adj[n + 1];
    vector<ll>value(n + 1);
    for(int i = 2; i <= n; i += 1){
        int a; cin >> a;
        adj[a].emplace_back(i); adj[i].emplace_back(a);
    }

    for(int i = 1; i <= n; i += 1) cin >> l[i] >> r[i];

    int ans = 0;
    function<void(int, int parent)>dfs = [&](int u, int parent){
        for(int v: adj[u]){
            if(v == parent) continue;
            dfs(v, u);
        }

        if(!value[u]){
            value[u] = r[u]; ans += 1;
        }
        else if(value[u] > r[u]) value[u] = r[u];
        else if(value[u] < l[u]){
            value[u] = r[u]; ans += 1;
        }

        if(parent) value[parent] += (ll)value[u];
    };

    dfs(1, 0); cout << ans << '\n';
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