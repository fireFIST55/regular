#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b / 2);
    x = (x * x) % MOD;
    if(b & 1) x = (x * a) % MOD;

    return x;
}

void solve(){
    ll n, m, ans = 1; cin >> n >> m;
    vector<ll>primes;
    for(ll i = 2; i * i <= n; i += (ll)2){
        if(!(n % i)){
            while(!(n % i)){
                n /= i;
            }
            primes.emplace_back(i);
        }
        if(i == 2) i -= 1;
    }
    if(n > 1) primes.emplace_back(n);

    for(ll p: primes){
        ll cnt = 0;
        for(ll q = p; q <= m; q *= p){
            cnt += (m / q);
        }

        ans = (ans * bigMOD(p, cnt)) % MOD;
    }
    cout << ans << '\n';
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