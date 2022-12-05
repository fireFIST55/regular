#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 998244353;

ll bigPOW(ll a, ll b){
    if(!b) return 1;
    ll x = bigPOW(a, b/2);
    x = (x * x)%MOD;

    if(b&1) x = (x * a)%MOD;
    return x;
}

void solve(){
    ll n;
    cin >> n;
    ll x = 1; 
    
    x = bigPOW(2, (ll)n);
    vector<ll>fact(n + 5);
    fact[1] = fact[2] = 1;
    for(int i = 3; i <= n; i += 1){
        fact[i] = (fact[i - 1] + fact[i - 2]) % MOD;
    }

    ll ans = (fact[n]*bigPOW(x, MOD - 2))%MOD;
    cout << ans << '\n';
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