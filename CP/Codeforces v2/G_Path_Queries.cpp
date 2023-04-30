#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll curr;

class DSU{
public:
    vector<int>parent;
    vector<ll>size;
    DSU(int n){
        size.resize(n + 1, (ll) 1);
        parent.resize(n + 1);
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    ll calc(ll x){
        ll cnt = ((x * (x - (ll) 1)) / (ll) 2);
        return cnt;
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

            curr -= calc(size[a]); curr -= calc(size[b]);
            size[a] += size[b]; curr += calc((ll)size[a]);
            parent[b] = a;
        }
    }
};

void solve(){
    int n, m; cin >> n >> m;
    vector<ll>ans(m);
    vector<pair<int, int>>qry(m);
    vector<pair<int, pair<int, int>>>edge(n - 1);
    for(int i = 0; i < n - 1; i += 1){
        cin >> edge[i].second.first >> edge[i].second.second >> edge[i].first;
    }
    for(int i = 0; i < m; i += 1){
        cin >> qry[i].first; qry[i].second = i;
    }
    sort(edge.begin(), edge.end());
    sort(qry.begin(), qry.end()); DSU dsu(n);
    int index = 0; curr = 0;
    for(int i = 0; i < m; i += 1){
        while(index < n - 1 && edge[index].first <= qry[i].first){
            int u = edge[index].second.first, v = edge[index].second.second;
            dsu.unionSet(u, v); index += 1;
        }
        ans[qry[i].second] = curr;
    }
    for(ll i: ans) cout << i << ' ';
    cout << '\n';
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