#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007
bool ok;
vector<int>color, c(2);
vector<vector<pair<int, int>>>adj;

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void dfs(int u){
    c[color[u]] += 1;
    for(auto p: adj[u]){
        int post = p.second?color[u]: !color[u];
        if(color[p.first] != -1){
            if(color[p.first] != post){
                ok = 0;
                return;
            }
        }
        else{
            color[p.first] = p.second?color[u]: !color[u];
            dfs(p.first);
        }
    }
}

void solve(){
    ok = 1;
    int n, m, a, b, ans = 0;
    cin>> n>> m;
    color.assign(n + 1, - 1);
    adj.assign(n + 1, vector<pair<int, int>>());
    for(int i = 1; i<=n; i += 1)    color[i] = -1;

    for(int i = 0; i<m; i += 1){
        string s;
        cin>> a>> b>> s;
        if(s == "imposter"){
            adj[a].push_back({b, 0});
            adj[b].push_back({a, 0});
        }
        else{
            adj[a].push_back({b, 1});
            adj[b].push_back({a, 1});
        }
    }

    for(int i = 1; i<=n && ok; i += 1){
        if(color[i] == -1){
            c[0] = c[1] = 0;
            color[i] = 0;
            dfs(i);
            ans += max(c[0], c[1]);
        }
    }

    ok?cout<<ans:cout<<-1;
    cout<<endl;
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