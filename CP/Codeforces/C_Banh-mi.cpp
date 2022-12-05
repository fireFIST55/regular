#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b/2);
    x = (x * x)%MOD;
    if(b & 1) x = (x * a)%MOD;

    return x;
}

void solve(){
    string s;
    int n, q; cin >> n >> q >> s;
    vector<int>prefix(n);
    for(int i = 0; i < n; i += 1)
        prefix[i] = (i?prefix[i - 1]: 0) + (s[i] == '1'?1: 0);
    
    for(int i = 0; i < q; i += 1){
        int a, b, one = 0, zero = 0; cin >> a >> b;
        a -= 1; b -= 1; one = prefix[b] - (a?prefix[a - 1]: 0); zero = (b  - a + 1) - one;

        ll ans = 0, last = 0;
        if(one) ans = bigMOD((ll)2, (ll)one) - (ll)1;
        
        ans = (ans + (ans*(bigMOD((ll)2, (ll)zero) - 1)) % MOD ) % MOD;
        cout << ans << '\n';
    }
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