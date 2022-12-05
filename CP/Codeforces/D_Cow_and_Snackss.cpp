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
            if(size[b] > size[a])   swap(a, b);

            parent[b] = a;
            size[a] += size[b]; x = 1;
        }
        return x;
    }
};

void solve(){
    int n, k; cin >> n >> k;
    DSU dsu(n);

    int happy = 0;
    for(int i = 0; i < k; i += 1){
        int u, v; cin >> u >> v;
        happy += dsu.unionSet(u, v);
    }
    cout << k - happy << '\n';
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