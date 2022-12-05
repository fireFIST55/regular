#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n; cin >> n >> s;
    vector<int>vc(n), vis(n + 1), adj[n + 1];
    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        adj[i].emplace_back(a);
    }

    function<void(int u, string &t)>dfs = [&](int u, string &t){
        vis[u] = 1; t += s[u - 1]; //cout << t << endl;
        for(int v: adj[u]){
            if(vis[v]) continue;
            dfs(v, t);
        }
    };

    function<int(string s)> calc = [&](string s){
        int curr = 1;
        if(s.length() > 1){
            int n = s.length();
            string t = s.back() + s.substr(0, n - 1);
            while(s != t){
                t = t.back() + t.substr(0, n - 1); curr += 1;
            }
        }

        return curr;
    };

    ll ans = 1;
    for(int i = 1; i <= n; i += 1){
        if(vis[i] || adj[i].empty()) continue;
        string t; dfs(i, t); //cout << "eta bairer ta: " << t << endl;

        ll x = calc(t);  ans = (ans * x) / (__gcd(ans, x));
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}