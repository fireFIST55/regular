#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

ll MOD = 998244353;
const int N = 3e5 + 5;

template <typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
vector<ll>fact(N);
void calc(){
    fact[0] = 1;
    for(int i = 1; i < N; i += 1) fact[i] = ((ll)i * fact[i - 1]) % MOD;
}

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b / 2);
    x = (x * x) % MOD;
    if(b & 1) x = (x * a) % MOD;
    return x;
}

ll ncr(ll n, ll r){
    ll ans = fact[n] * bigMOD((fact[r] * fact[n - r]) % MOD, MOD - 2);
    return ans;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v;
        vp.emplace_back(u, v);
    }
    sort(vp.begin(), vp.end());
    ordered_set<int>os; ll ans = 0;
    for(int i = 0; i < k - 1; i += 1) os.insert(vp[i].second);
    for(int i = k - 1; i < n; i += 1){
        int total = os.size() - os.order_of_key(vp[i].first) + 1;
        if(total >= k) ans = (ans + ncr(total - 1, k - 1)) % MOD; 
        os.insert(vp[i].second);
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    calc();

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}