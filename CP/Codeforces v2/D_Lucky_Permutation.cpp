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
    int n, operation = 0; cin >> n;
    vector<int>vc(n), vis(n + 5), parent(n + 5), index(n + 5); DSU dsu(n + 1);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; index[vc[i]] = i + 1;
        if(vc[i] != i + 1) dsu.unionSet(vc[i], i + 1);
    }

    int extra = 1;
    for(int i = 1; i <= n; i += 1){
        int u = dsu.findRepresentative(i);
        parent[i] = u;
        if(i > 1 && parent[i] == parent[i - 1]){
            extra = min(extra, - 1);
            if(index[i] == i - 1 && index[i - 1] == i){
                if(dsu.size[u] > 2) extra = min(extra, - 2);
                else extra = min(extra, - 1);
            }
        }
        if(!vis[u]) operation += ((int)dsu.size[u] - 1);
        vis[u] = 1;
    }
    operation += extra;
    cout << operation << '\n';
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