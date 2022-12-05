#include<bits/stdc++.h>
#define ll long long
using namespace std;

class DSU{
public:
    vector<int>parent, size;
    DSU(int n){
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int findRepresentative(int u){
        if(u == parent[u])  return u;
        else return parent[u] = findRepresentative(parent[u]);
    }

    int unionSet(int a, int b){
        int x = 0;
        a = findRepresentative(a);
        b = findRepresentative(b);

        if(a != b){
            x = 1;
            if(size[b] > size[a])   swap(a, b);

            parent[b] = a;
            size[a] += size[b];
        }
        return x;
    }
};

void solve(){
    int n, m; cin >> n >> m;
    vector<int>mx(n + 5); DSU dsu(n);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        dsu.unionSet(u, v);
    }

    for(int i = 1; i <= n; i += 1){
        int v = dsu.findRepresentative(i);
        mx[v] = max(mx[v], i);
    }

    int ans = 0;
    for(int i = 1; i <= n; i += 1){
        int index = i, r = mx[dsu.findRepresentative(i)];
        for(int k = i + 1; k <= r; k += 1){
            i += 1;
            r = max(r, mx[dsu.findRepresentative(k)]);
            ans += dsu.unionSet(index, k);
        }
    }
    cout << ans << '\n';
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