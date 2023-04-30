#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;
ll MOD = 1e9 + 7;
vector<ll>fact(N);

void solve(){
    ll n; cin >> n;
    ll ans = 0, p = 1, x = 2;
    for(ll i = 1; i <= n; i += 1){
        ans = (ans + (fact[n] * ((n - i) * x) % MOD) % MOD) % MOD;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    fact[0] = 1;
    for(ll i = 1; i < N; i += 1){
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}