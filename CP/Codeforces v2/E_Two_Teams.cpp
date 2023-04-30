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
    int n, k; cin >> n >> k; 
    vector<int>vc(n), ans(n), pos(n + 5), vis(n + 5);
    DSU dsu(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; pos[vc[i]] = i;
    }
    for(int i = n, l = 0; i >= 1; i -= 1){
        if(vis[i]) continue;
        int j = pos[i] - 1, cnt = 0; ans[pos[i]] = (l & 1)?2: 1; vis[i] = 1;
        while(j >= 0 && cnt < k){
            if(vis[vc[j]]){
                int r = j; j -= dsu.size[dsu.findRepresentative(j)];
                dsu.unionSet(r, dsu.findRepresentative(pos[i]));
            }
            else{
                ans[j] = (l & 1)?2: 1;
                dsu.unionSet(j, dsu.findRepresentative(pos[i])); vis[vc[j]] = 1;
                cnt += 1; j -= 1; 
            }
        }
        j = pos[i] + 1, cnt = 0; 
        while(j < n && cnt < k){
            if(vis[vc[j]]){
                int r = j; j += dsu.size[dsu.findRepresentative(j)];
                dsu.unionSet(r, dsu.findRepresentative(pos[i]));
            }
            else{
                ans[j] = (l & 1)?2: 1;
                dsu.unionSet(j, dsu.findRepresentative(pos[i])); vis[vc[j]] = 1;
                cnt += 1; j += 1;
            }
        }
        l += 1;
    }
    for(int i: ans) cout << i;
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