#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m; cin >> n >> m;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;

    function<ll(int i, int j)>calc = [&](int i, int j){
        ll res = (vc[i] != vc[i + 1]) * (i + 1) * (n - (i + 2) + 1);
        return res;
    };

    ll ans = 0;
    for(int i = 0; i + 1 < n; i += 1){
        ans += calc(i, i + 1);
    }

    while(m--){
        int i, x; cin >> i >> x; i -= 1;
        if(i - 1 >= 0) ans -= calc(i - 1, i);
        if(i + 1 < n) ans -= calc(i, i + 1);

        vc[i] = x;
        if(i - 1 >= 0) ans += calc(i - 1, i);
        if(i + 1 < n) ans += calc(i, i + 1);
        cout << ans + n * (1 + n) / (ll)2 << '\n';
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