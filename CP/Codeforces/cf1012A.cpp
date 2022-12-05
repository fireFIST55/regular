#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(2*n);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    ll ans = LONG_LONG_MAX;
    for(int i = 0; i + n - 1 < 2*n; i += 1){
        ll curr = (vc[i + n - 1] - vc[i]);
        ll l = i?0: i + n, r = i == 2*n - 1?i - 1: 2*n - 1;

        curr *= (vc[r] - vc[l]);
        ans = min(ans, curr);
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