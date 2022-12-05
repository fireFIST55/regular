#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b/2) % MOD;
    
    x = (x * x)%MOD;
    if(b&1) x = (x * a)%MOD;
    return x;
}

void solve(){
    ll ans = 1;
    int n; cin >> n;
    vector<int>a(n), b(n), c(n), marked(n + 1), adj[n + 1];
    for(int &i: a) cin >> i;
    for(int i = 0; i < n; i += 1){
        cin >> b[i];
        if(a[i] != b[i]){
            adj[a[i]].push_back(b[i]); adj[b[i]].push_back(a[i]);
        }
    }
    deque<int>dq;
    for(int i = 0; i < n; i += 1){
        cin >> c[i];
        if(c[i]) dq.push_back(c[i]);
    }   

    function<void(int u)>dfs = [&](int u){
        marked[u] = 1;

        for(int v: adj[u]){
            if(!marked[v]) dfs(v);
        }
    };

    while(!dq.empty()){
        int x = dq.front(); dq.pop_front();

        if(!marked[x]) dfs(x);
    }

    ll cnt = 0;
    for(int i = 1; i <= n; i += 1){
        if((int)adj[i].size() > 0 && !marked[i]){
            dfs(i); cnt += 1;
        }
    }

    ans = bigMOD((ll)2, cnt);
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