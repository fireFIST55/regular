#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, ll>>answer[n + 5];
    vector<ll>score(n + 5);
    vector<int>parents(n + 5), adj[n + 5];
    for(int i = 2; i < n + 1; i += 1){
        int p; cin >> p; adj[p].emplace_back(i);
    }
    for(int i = 1; i <= n; i += 1)  cin >> score[i];

    function<ll(int u, int m)>dfs = [&](int u, int m){
        for(pair<int, ll>p: answer[u]){
            if(p.first == k) return p.second;
        }
        ll ans = m * score[u];
        int cnt = adj[u].size();
        if(!cnt) return ans;
        vector<ll>dp1(cnt), dp2(cnt), dif(cnt);
        if(m % cnt){
            for(int i = 0; i < cnt; i += 1) dp1[i] = dfs(adj[u][i], m / cnt), dp2[i] = dfs(adj[u][i], m / cnt + 1);
            for(int i = 0; i < cnt; i += 1) dif[i] = dp2[i] - dp1[i];
            sort(dif.begin(), dif.end(), greater<ll>());
            for(int i = 0; i < cnt; i += 1){
                if(i < m % cnt) ans += dif[i];
                ans += dp1[i];
            }
        }
        else{
            for(int v: adj[u]) dfs(v, m / cnt);
        }
        return ans;
    };

    cout << dfs(1, k) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}