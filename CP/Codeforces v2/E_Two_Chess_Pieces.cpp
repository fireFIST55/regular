#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, d;
const int N = 2e5 + 5;
vector<vector<bool>>ase(2, vector<bool>(N, 0));
vector<int>adj[N], daway(N), dis(N);

void dfs1(int u, int parent, int depth){
    dis[depth] = u;
    daway[u] = depth <= d?1: dis[depth - d];
    for(int v: adj[u]){
        if(v == parent) continue;
        dfs1(v, u, depth + 1);
    }
}

void dfs2(int u, int parent, int index){
    bool take = 0;
    for(int v: adj[u]){
        if(v == parent) continue;
        dfs2(v, u, index); take |= ase[index][v];
    }
    ase[index][u] = ase[index][u] | take;
}

void solve(){
    cin >> n >> d;
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v), adj[v].emplace_back(u);
    }
    dfs1(1, 0, 1);
    for(int i = 0; i < 2; i += 1){
        int m; cin >> m;
        for(int j = 0; j < m; j += 1){
            int x; cin >> x; ase[i][x] = 1, ase[i ^ 1][daway[x]] = 1;
        }
    }
    ll ans = 0;
    for(int i = 0; i < 2; i += 1) dfs2(1, 0, i);
    for(int i = 0; i < 2; i += 1){
        for(int j = 2; j <= n; j += 1){
            if(ase[i][j]) ans += (ll)2;
        }
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}