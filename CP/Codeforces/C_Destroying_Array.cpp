#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define M 1e5 + 5
vector<ll>vc(M), order(M), ans(M);
vector<int>flag(M + 1);

class DSU{
public:
    vector<int>parent, size;
    vector<ll>sum;
    DSU(int n){
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        sum.resize(n + 1);
        for(int i = 1; i <= n; i++){
            parent[i] = i; sum[i] = vc[i];
        }
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
            size[a] += size[b]; sum[a] += sum[b];
        }
    }
};

void solve(){
    int n; cin >> n;
    for(int i = 1; i <= n; i += 1) cin >> vc[i];
    for(int i = 1; i <= n; i += 1) cin >> order[i];
    DSU dsu(n);
    ans[n] = 0;

    for(int i = n; i > 0; i -= 1){
        flag[order[i]] = 1;
        if(order[i] - 1 && flag[order[i] - 1]) dsu.unionSet(order[i], order[i] - 1);
        if(order[i] + 1 <= n && flag[order[i] + 1]) dsu.unionSet(order[i], order[i] + 1);
        ans[i - 1] = max(ans[i], dsu.sum[dsu.findRepresentative(order[i])]);
    }

    for(int i = 1; i <= n; i += 1) cout << ans[i] << '\n';
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