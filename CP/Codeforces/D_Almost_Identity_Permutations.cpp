#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ncr(int n, int r){
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n; k *= r;
            ll m = __gcd(p, k);
            p /= m; k /= m;
            n -= (ll)1; r -= (ll)1;
        }
    }
 
    else
        p = 1;
 
    return p;
}

void solve(){
    vector<ll>derange{0, 0, 1, 2, 9};
    ll n, k, ans = 0; cin >> n >> k;
    for(ll i = 0; i <= k; i += 1)
        ans += ncr(n, i)*derange[i];
    
    cout << 1 + ans << '\n';
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