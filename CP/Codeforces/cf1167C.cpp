#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

class dsu{
public:
    vector<int>parent, size;
    dsu(int n){
        size.resize(n+1, 1);
        parent.resize(n+1);
        for(int i = 1; i<=n; i++)
            parent[i] = i;
    }

    int findRepresentative(int u){
        if(u == parent[u])  return u;
        else return parent[u] = findRepresentative( parent[u] );
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
    int a, n, m, x;
    cin>> n>> m;
    dsu d(n + 1);

    while(m--){
        int k;
        cin>> k;
        for(int i = 0; i < k; i += 1){
            cin>> a;
            if(i) d.unionSet(a, x);
            x = a;
        }
    }

    for(int i = 1; i <= n; i += 1)  cout<< d.size[d.findRepresentative(i)]<< " ";
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}