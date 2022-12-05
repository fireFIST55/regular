#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

void solve(){
    ll n, x = 1; cin >> n;
    vector<ll>vc(n), freq(65);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];

        for(ll k = log2(vc[i]); k >= 0; k -= 1){
            if((vc[i] & (x << k))) freq[k] += 1;
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        ll And = 0, Or = 0;
        for(ll k = 0, curr = 1; k < 61; k += 1, curr = x << k){
            if((vc[i] & (x << k))){
                And = (And + (((curr % MOD) * freq[k]) % MOD)) % MOD;
                Or = (Or + (n * (curr % MOD)) % MOD) % MOD;
            }
            else Or = (Or + ((curr % MOD) * freq[k]) % MOD) % MOD;
        }
        ans = (ans + (Or * And) % MOD) % MOD;
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