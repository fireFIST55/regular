#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>w(n);
    vector<int>adj[n + 5];
    for(ll &i: w) cin >> i;
    for(int i = 0; i < n - 1; i += 1){
        int u, v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
    }

    ll pls = 0, pcnt = 0, mns = w[0], mncnt = 1;
    function<void(int, int parent, int dis)> dfs = [&](int u, int parent, int dis){
        for(int v: adj[u]){
            if(v == parent) continue;  
            if(!(dis & 1)){
                mns += w[v - 1]; mncnt += 1;
            }
            else{
                pls += w[v - 1], pcnt += 1;
            }

            dfs(v, u, dis + 1);
        }
    };

    ll ans; int ver = 1;
    function<void(int, int parent, int dis)> khela = [&](int u, int parent, int dis){
        for(int v: adj[u]){
            if(v == parent) continue;
            ll curr;
            if(dis & 1){
                curr = (mns - mncnt * w[v - 1]) + ((pcnt - 1) * w[v - 1]  - (pls - w[v - 1])); 
            }
            else{
                ll curr = max(curr, ((mncnt - 1) * w[v - 1] - (mns - w[v - 1])) + (pls - pcnt * w[v - 1]));
            }
            if(ans < curr){
                ans = curr; ver = v;
            }
            else if(ans == curr && ver < v) ver = v;
            khela(v, u, dis + 1);
        }
    };
    dfs(1, - 1, 1); ans = (mncnt * w[0] - mns) + (pls - pcnt * w[0]);
    khela(1, - 1, 1);

    cout << ver << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i += 1){
        cout << "Case " << i << ": "; solve();
    }
    
    return 0;
}