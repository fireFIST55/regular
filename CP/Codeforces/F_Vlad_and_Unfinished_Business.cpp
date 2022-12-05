#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, x, y; cin >> n >> k >> x >> y;
    vector<int>list(k), lst(n + 5), meet(n + 5), adj[n + 5];
    for(int &i: list){
        cin >> i; lst[i] = 1;
    }
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }

    function<void(int u, int parent)>khela = [&](int u, int parent){
        for(int v: adj[u]){
            if(v == parent) continue;
            khela(v, u);
            if(lst[v]) lst[u] = 1;
            if(meet[v]) meet[u] = 1; 
        }
    };

    meet[y] = 1; khela(x, - 1);
    int ans = 0;
    for(int i = 1; i <= n; i += 1){
        if(i == x) continue;
        if(meet[i]) ans += 1;
        else if(lst[i]) ans += 2;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}