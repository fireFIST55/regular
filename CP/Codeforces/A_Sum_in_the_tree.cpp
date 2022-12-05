#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>sm(n + 5), adj[n + 5];
    for(int i = 2; i <= n; i += 1){
        int a; cin >> a;
        adj[a].push_back(i); adj[i].push_back(a);
    }
    for(int i = 1; i <= n; i += 1) cin>> sm[i];

    function<bool(int, int)>dfs = [&](int u, int parent){
        bool khela = 1;
        int mn = INT_MAX;
        for(int v: adj[u]){
            if(v != parent){
                if(sm[v] != - 1){
                    if(sm[v] < sm[parent]){
                        khela = 0; break;
                    }
                    else mn = min(mn, sm[v]);
                }

                khela = khela & dfs(v, u);
            }
        }

        if(sm[u] == - 1 && adj[u].size() > 1) sm[u] = mn;
        return khela;
    };

    function<void(int, int, ll &res)>khelaa = [&](int u, int parent, ll &res){
        for(int v: adj[u]){
            if(v != parent){
                if(sm[v] != - 1){
                    if(sm[u] == - 1) res += (ll)(sm[v] - sm[parent]);
                    else res += (ll)(sm[v] - sm[u]);
                }

                khelaa(v, u, res);
            }
        }
    };

    if(dfs(1, 0)){
        ll ans = (ll)sm[1];
        khelaa(1, 0, ans); cout << ans << '\n';
    }
    else cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}