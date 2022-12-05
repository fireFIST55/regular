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

int cnt = 0;

class dsu{
public:
    vector<int>parent, size;
    multiset<int>ms;

    dsu(int n){
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for(int i = 1; i <= n; i += 1)
            parent[i] = i, ms.insert(-1);
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

            ms.erase(ms.find(-size[a]));
            ms.erase(ms.find(-size[b]));

            parent[b] = a;
            size[a] += size[b];
            ms.insert(-size[a]);
        }
        else cnt += 1;
    }
};

void solve(){
    int n, d, l, r;
    cin>> n>> d;
    dsu dd(n);

    for(int i = 0; i < d; i += 1){
        cin>> l>> r;
        dd.unionSet(l, r);
        // cout<< cnt<< endl;

        int ans = 0, k = 0;
        for(int x: dd.ms){
            ans -= x;
            k += 1;
            if(k == cnt + 1) break;
        }

        cout<< ans - 1<< endl;
    }
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