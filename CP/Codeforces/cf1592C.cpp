#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

int xOr, tot;
vector<int>val;
#define MOD 1000000007
vector<vector<int>>adj;

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void dfs(int node, int from){
    for(int v: adj[node]){
        if(v == from)   continue;
        dfs(v, node);
        val[node] ^= val[v];
    }

    if(val[node] == xOr){
        tot += 1;
        val[node] = 0;
        if(tot >= 2)    return;
    }
}

void solve(){
    tot = 0;
    int n, k, a, b;
    cin>> n>> k;
    val.assign(n + 1, 0);
    adj.assign(n + 1, vector<int>());

    for(int i = 1; i<=n; i += 1){
        cin>> val[i];
        if(i - 1) xOr ^= val[i];
        else xOr = val[i];
    }
    for(int i = 0; i<n - 1; i += 1){
        cin>> a>> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    if(!xOr){
        cout<<"YES\n";
        return;
    }
    if(k == 2){
        cout<<"NO\n";
        return;
    }

    dfs(1, 0);
    // cout<<tot<<endl<<endl;
    tot>=2?cout<<"YES\n": cout<<"NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}