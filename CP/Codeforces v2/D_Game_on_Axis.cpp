#include<bits/stdc++.h>
#define ll long long
using namespace std;

class dsu{
public:
    vector<int>parent, size;
    vector<bool>pure;
    dsu(int n){
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        pure.resize(n + 1, true);
        for(int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int findRepresentative(int u){
        if(u == parent[u])  return u;
        else return parent[u] = findRepresentative( parent[u] );
    }

    bool unionSet(int a, int b){
        bool ret = 0;
        a = findRepresentative(a);
        b = findRepresentative(b);

        if(a != b){
            if(size[b] > size[a])   swap(a, b);

            parent[b] = a;
            size[a] += size[b];
            ret = 1; pure[a] = pure[a] & pure[b];
        }
        else pure[a] = 0;
        return ret;
    }
};

void solve(){
    int n; cin >> n;
    dsu DSU(n);
    vector<int>vc(n + 5), prefix(n + 5), vis(n + 5);
    for(int i = 1; i <= n; i += 1) cin >> vc[i];
    for(int i = 1; i <= n; i += 1){
        bool y = 1;
        while(y){
            vis[i] = 1;
            if(vc[i] + i <= n && vc[i] + i >= 1 && !vis[vc[i] + i]){
                y = DSU.unionSet(i, vc[i] + i);
            }
            else y = 0, DSU.pure[DSU.findRepresentative(i)] = 1;
        }
    }
    for(int i = 1; i <= n; i += 1) prefix[i] += prefix[i - 1] + !(DSU.pure[DSU.findRepresentative(i)]);
    ll ans = 0;
    for(int i = 1; i <= n; i += 1){
        ans = ans + (ll)prefix[i - 1] + (ll)(prefix[n] - prefix[i]) + i + (n - i + 1);
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}