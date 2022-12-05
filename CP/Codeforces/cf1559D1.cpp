#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

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
        if(u != parent[u])  parent[u] = findRepresentative( parent[u] );

        return parent[u];
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
    int n, m1, m2, u, v;
    cin>>n>>m1>>m2;
    vector<pair<int, int>>ans;

    dsu d1(n), d2(n);

    for(int i = 0; i<m1 + m2; i++){
        cin>>u >>v;

        if(i<m1)
            d1.unionSet(u, v);
        else    d2.unionSet(u, v);
    }

    for(int i = 0; i<n - 1; i++){
        for(int j =  0; j<n; j++){
            if(d1.findRepresentative(i+1) != d1.findRepresentative(j + 1) && d2.findRepresentative(i + 1) != d2.findRepresentative(j + 1)){
                d1.unionSet(i + 1, j + 1);
                d2.unionSet(i + 1, j + 1);
                ans.push_back({i + 1, j + 1});
            }
        }
    }

    cout<<ans.size()<<endl;
    for(pair<int, int>pi : ans) cout<<pi.first<<' '<<pi.second<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();

    return 0;
}