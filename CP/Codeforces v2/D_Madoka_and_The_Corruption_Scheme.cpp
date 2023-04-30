#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;
const int N = 1e5 + 5;
vector<ll>fact(N), inv(N);

ll bigPOW(ll n, ll k){
    if(!k) return 1LL;
    ll x = bigPOW(n, k / (ll)2);
    x = (x * x) % MOD;
    if(k & 1) x = (x * n) % MOD;
    return x;
}

ll C(ll n, ll k){
    return (((fact[n] * inv[k]) % MOD) * inv[n - k]) % MOD;
}

void solve(){
    int n, k; cin >> n >> k;
    fact[0] = 1;
    for(int i = 1; i <= n; i += 1) fact[i] = (fact[i - 1] * i) % MOD;
    inv[n] = bigPOW(fact[n], MOD - 2);
    for(int i = n - 1; i >= 0; i -= 1) inv[i] = (inv[i + 1] * (i + 1)) % MOD;
    ll ans = 0;
    for(int i = 0; i <= k; i += 1) ans = (ans + C(n, i)) % MOD;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}