#include<bits/stdc++.h>
#define ll long long
using namespace std;

class dsu{
public:
    vector<int>parent, size;
    dsu(int n){
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int findRepresentative(int u){
        if(u == parent[u])  return u;
        else return parent[u] = findRepresentative(parent[u]);
    }

    void unionSet(int a, int b){
        a = findRepresentative(a);
        b = findRepresentative(b);

        if(a != b){
            if(size[b] > size[a])   swap(a, b);

            parent[b] = a;
            size[a] += size[b];
        }
    }
};

void solve(){
    int n, m; cin >> n >> m;
    vector<int>adj[n + 5]; dsu DSU(n + 5);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        DSU.unionSet(u, v);
    }

    int q; cin >> q;
    for(int i = 0; i < q; i += 1){
        int u, v; cin >> u >> v;
        if(DSU.findRepresentative(u) == DSU.findRepresentative(v)) cout << "yes\n";
        else cout << "no\n";
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