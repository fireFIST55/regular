#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n; cin >> n;
    vector<int>a{0, 1, 2}, ansp, color(n), adj[n + 5];
    vector<vector<int>>c(3, vector<int>(n));
    for(int i = 0; i < 3; i += 1){
        for(int j = 0; j < n; j += 1) cin >> c[i][j];
    }
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
        if(adj[u].size() > 2 || adj[v].size() > 2) yes = 0;
    }
    int root = - 1;
    for(int i = 1; i <= n && yes; i += 1){
        if(adj[i].size() == 1){
            root = i; break;
        }
    }
    function<void(int u, int parent, int dis, ll &cost, bool prnt)>dfs = [&](int u, int parent, int dis, ll &cost, bool prnt){
        for(int v: adj[u]){
            if(v == parent) continue;
            if(prnt) color[v - 1] = a[dis % 3];
            cost += (ll)c[a[dis % 3]][v - 1]; dfs(v, u, dis + 1, cost, prnt);
        }
    };
    ll ans = LONG_LONG_MAX;
    do{
        if(!yes) break;
        ll curr = c[a[0]][root - 1];
        dfs(root, - 1, 1, curr, 0);
        if(ans > curr){
            ans = curr; ansp = a;
        }
    }while(next_permutation(a.begin(), a.end()));

    if(yes){
        cout << ans << '\n';
        ll curr = 0;
        a = ansp; color[root - 1] = a[0]; dfs(root, - 1, 1, curr, true);
        for(int i: color) cout << i + 1 << ' ';
        cout << '\n';
    }
    else cout << - 1 << '\n';
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