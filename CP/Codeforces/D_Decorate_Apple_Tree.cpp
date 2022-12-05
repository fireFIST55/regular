#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>leaves(n + 1), adj[n + 5];
    for(int i = 2; i <= n; i += 1){
        int a; cin >> a;
        adj[a].emplace_back(i); adj[i].emplace_back(a);
    }

    function<int(int, int)>dfs = [&](int u, int parent){
        int leaf = 0, below = 0;
        for(int v: adj[u]){
            if(v != parent){
                leaf += dfs(v, u); below += 1;
            }
        }

        if(!below) leaf = 1;
        leaves[u] = leaf;
        return leaf;
    };

    dfs(1, 0);
    sort(leaves.begin(), leaves.end());

    for(int i = 1; i <= n; i += 1) cout << leaves[i] << ' ';
    cout << '\n';
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