#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, MOD; cin >> n >> MOD;
    vector<int>fact(n + 5); fact[0] = 1;
    for(int i = 1; i <= n; i += 1) fact[i] = (fact[i - 1] * (ll) i)%MOD;
    ll ans = 0;

    for(int i = 1; i <= n; i += 1){
        ans = (ans + ((((ll)(n - i + 1)*fact[i]) % MOD ) * fact[n - i + 1]) % MOD) % MOD;
    }

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