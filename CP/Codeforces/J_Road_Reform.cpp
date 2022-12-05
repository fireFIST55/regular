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
    vector<node>khela;
    for(int i = 0; i < m; i += 1){
        node dummy; cin >> dummy.x >> dummy.y >> dummy.weight;
        khela.emplace_back(dummy);
    }

    sort(khela.begin(), khela.end());
    ll mnCost = 0, cnt = 0, mn = INT_MAX; DSU dsu(n);
    for(node nde: khela){
        if(dsu.findRepresentative(nde.x) != dsu.findRepresentative(nde.y)){
            if(cnt == n - 2){
                mn = min(mn, abs(k - nde.weight)); continue;
            }
            dsu.unionSet(nde.x, nde.y);
            mnCost += max((ll)0, nde.weight - k); cnt += 1;
        }
    }
    cout << mnCost + mn << '\n';
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