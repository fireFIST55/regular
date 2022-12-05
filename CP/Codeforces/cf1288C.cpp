#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll mod = 1e9 + 7;
vector<ll>fact(1005);

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b/2)%mod;
    x = (x * x)%mod;

    if(b&1) x = (x * a)%mod;
    return x;
}

ll ncr(int n, int r){
    ll y = (fact[n - r]*fact[r])%mod;
    ll ans = (fact[n] * bigMOD(y, mod - 2)%mod)%mod;
    return ans;
}
void solve(){
    int n, m; cin >> n >> m;
    ll ans = ncr(n + 2*m - 1, 2*m);
    cout << ans << '\n'; 
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    fact[0] = 1;
    for(int i = 1; i <= 1000; i += 1)  fact[i] = (fact[i - 1] *(ll) i)%mod;
    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}