#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

ll calc(ll n){
    ll one = 1, two = 2, ans;
    ans = ((n + one) * n) / two; ans = (ans % MOD);
    return ans; 
}

void solve(){
    ll n, m, prefix = 0, suffix = 0, currP = 0, currS = 0; cin >> n >> m;
    vector<ll>vc(n); m = (1 + m);
    ll x = calc(m);
    for(ll &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        currP += vc[i]; prefix += currP;
        currS += vc[n - 1 - i]; suffix += currS;
    }
    ll ans = 0;
    if(prefix >= suffix){
        for(ll i = 0; i < n; i += 1){
            ans = (ans + (vc[i] * (((n * x) % MOD) - ((i * m) % MOD + (n * calc(m - 1)) % MOD) % MOD) % MOD) % MOD) % MOD;
        }
    }
    else{
        reverse(vc.begin(), vc.end());

    }
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