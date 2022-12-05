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

int sz = 0;
vector<bool>isVisited(100005, false);
vector<vector<int>>adj(100005, vector<int>());

ll bigMOD(ll a, ll b){
    if(!b)  return 1;
    ll x = bigMOD(a, b/2)%MOD;
    x = (x * x)%MOD;

    if(b&1) x = (x * a)%MOD;
    return x;
}

void dfs(int artc){
    if(isVisited[artc]) return;
    isVisited[artc] = 1;
    sz += 1;
    for(int vrtc: adj[artc]){
        if(!isVisited[vrtc])
            dfs(vrtc);
    }
}

void solve(){
    ll n, k, ans = 0;
    int u, v, col;
    cin>> n>> k;
    for(int i = 0; i < n - 1; i += 1){
        cin>> u>> v>> col;
        if(!col){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    ans += bigMOD(n, k);
    for(int i = 1; i <= n; i += 1){
        sz = 0;
        if(isVisited[i])   continue;
        dfs(i);
        ans = (ans - bigMOD(sz, k) + MOD)%MOD;
    }

    cout<< ans<< endl;
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