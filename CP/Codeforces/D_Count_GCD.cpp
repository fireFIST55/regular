#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 998244353;

void solve(){
    int n, m; cin >> n >> m;
    vector<ll>b(n), primes;
    for(ll &i: b) cin >> i;
    for(int i = 1; i < n; i += 1){
        if(b[i - 1] % b[i]){
            cout << 0 << '\n';
            return;
        }
    }

    ll x = b[0];
    for(int i = 2; i * i <= x; i += 2){
        if(!(x % i)){
            primes.emplace_back(i);
            while(!(x % i)){
                x /= i;
            }
        }

        if(i == 2) i -= 1;
    }
    if(x > 1) primes.emplace_back(x);

    function<ll(ll a, ll m)> khela = [&](ll a, ll m){
        vector<ll>nw;
        for(ll i: primes){
            if(!(a % i)) nw.emplace_back(i);
        }

        int k = nw.size(); ll ans = 0;
        for(int i = 1; i < (1 << k); i += 1){
            int cnt = 0;
            ll curr = 1;
            for(int j = 0; j < k; j += 1){
                if(i & (1 << j)){
                    cnt += 1; curr *= nw[j];
                }
            }
            if(cnt & 1) ans += (m / curr);
            else ans -= (m / curr);
        }
        return m - ans;
    };

    ll ans = 1;
    for(int i = 1; i < n; i += 1){
        ans = (ans * khela(b[i - 1] / b[i], m / b[i])) % MOD;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}