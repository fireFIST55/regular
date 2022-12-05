#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>


void solve(){
    int n, k, a, b, ans;
    cin>> n>> k;
    ans = n;
    vector<int>adj[n + 1], nodes(n + 1), vis(n + 1);

    for(int i = 0; i<n - 1; i += 1){
        cin>> a>> b;
        nodes[a] += 1;
        nodes[b] += 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if(n == 1){
        cout<<0<<endl;
        return;
    }

    queue<int>q;
    for(int i = 1; i<=n; i += 1){
        if(nodes[i] == 1)  q.push(i);
    }

    int u, v;
    for(int i = 1; i<=k && ans; i += 1){
        queue<int>dq;
        while(!q.empty()){
            u = q.front();
            q.pop();

            vis[u] = 1;
            ans -= 1, nodes[u] -= 1;
            for(int v : adj[u]){
                if(!vis[v]){
                    nodes[v] -= 1;
                    if(nodes[v] == 1)   dq.push(v);
                }
            }
        }
        q.swap(dq);
    }
    cout<<ans<<endl;
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