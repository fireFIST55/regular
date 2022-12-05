#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
    int x, y; ll weight;
    bool operator<(node const& other){
        return weight < other.weight;
    }
};

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
    int n, m; ll k; cin >> n >> m >> k;
    DSU dsu(n);
    vector<node>khela;
    for(int i = 0; i < m; i += 1){
        node dummy; cin >> dummy.x >> dummy.y >> dummy.weight; dummy.weight = max((ll)0, dummy.weight - k);
        khela.emplace_back(dummy);
    }

    sort(khela.begin(), khela.end());
    ll mnCost = 0;
    for(node n: khela){
        if(dsu.findRepresentative(n.x) != dsu.findRepresentative(n.y)){
            dsu.unionSet(n.x, n.y);
            mnCost += n.weight; 
        }
    }
    cout << mnCost << '\n';
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