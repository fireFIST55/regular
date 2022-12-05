#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, root, deg = 0; cin >> n >> k;
    vector<int>adj[n + 5];
    vector<pair<int, int>>vp;
    for(int i = 0; i < k; i += 1){
        int u, v; cin >> u >> v; vp.emplace_back(u, v);
        adj[u].emplace_back(v); adj[v].emplace_back(u);
        if(adj[u].size() > deg) root = u, deg = adj[u].size();
        if(adj[v].size() > deg) root = v, deg = adj[v].size();
    }

    int happy = 0;
    vector<int>vis(n + 5, 0);
    function<void(int u)>khela = [&](int u){
        deque<int>dq; //cout << "u: " << u << endl; 
        for(int v: adj[u]){
            if(!vis[v]){
                //cout << v << ' ';
                happy += 1; dq.push_back(v); vis[v] = 1;
            }
        }
        //cout << endl;

        while(!dq.empty()){
            int v = dq.front(); dq.pop_front();
            khela(v);
        }
    };

    vis[root] = 1; 
    khela(root);
    for(pair<int, int>pi: vp){
        if(!vis[pi.first]){
            vis[pi.first] = 1; khela(pi.first);
        }
        else if(!vis[pi.second]){
            vis[pi.second] = 1; khela(pi.second); 
        }
    }
    cout << k - happy << '\n';
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