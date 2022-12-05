#include<bits/stdc++.h>
#define ll long long
using namespace std;

class DSU{
public:
    vector<int>parent, sze;
    DSU(int n){
        parent.resize(n, 0); 
        sze.resize(n, 1);
        for(int i = 0; i < n; i += 1) parent[i] = i;
    }

    int findRepresentative(int u){
        if(u == parent[u]) return u;
        else return parent[u] = findRepresentative(parent[u]);
    }

    void unionSet(int u, int v){
        u = findRepresentative(u);
        v = findRepresentative(v);

        if(u != v){
            if(sze[u] < sze[v]) swap(u, v);
            parent[v] = u; sze[v] += sze[u];
        }
    }
};

void solve(){
    string a, b;
    int n; cin >> n >> a >> b;
    DSU dsu(26);
    
    int ans = 0;
    for(int i = 0; i < n; i += 1){
        int xa = a[i] - 97, xb = b[i] - 97;
        if(xa > xb){
            cout << - 1 << '\n';
            return;
        }
        if(dsu.findRepresentative(xa) == dsu.findRepresentative(xb)) continue;
        ans += 1; dsu.unionSet(xa, xb);
    }
    cout << ans << '\n';
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