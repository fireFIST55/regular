#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>marks(n), adj[n + 5], vis(n + 5);
    for(int &i: marks) cin >> i;
    int from = 1, to;
    ll mx = marks[0];
    function<void(int u, int parent, ll curr)>far = [&](int u, int parent, ll curr){
        for(int v: adj[u]){
            if(v == u) continue;
            if(curr + (ll)marks[v - 1] > mx){
                from = v; mx = curr + (ll)marks[v - 1];
            }
            far(v, u, curr + (ll)marks[v - 1]);
        }
    };
    far(1, - 1, marks[0]); mx = marks[from - 1];
    to = from; far(to, - 1, marks[to - 1]);
    ll ans1 = mx, ans2;

    function<bool(int u, int parent)>pth = [&](int u, int parent){
        bool ok = 0;
        if(u == to) ok = 1;
        for(int v: adj[u]){
            if(v == parent) continue;
            if(pth(v, u) || ok){
                vis[u] = 1; ok = 1; break;
            }
        }
        return ok;
    };
    vis[from] = vis[to] = 1;
    
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].emplace_back(v); adj[v].emplace_back(u);
    }
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