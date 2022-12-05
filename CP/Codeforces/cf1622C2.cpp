#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll acFl(ll a, ll b){
    ll val = a/b;
    while(val*b > a) val -= 1;

    return val;
}

void solve(){
    int n;
    ll mxSm; cin >> n >> mxSm;
    vector<int>vc(n); 
    vector<ll>prefix(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    for(int i = 0; i < n; i += 1) prefix[i] = (i?prefix[i - 1]: 0) + vc[i];
    if(prefix[n - 1] <= mxSm){
        cout << 0 << '\n';
        return;
    }

    ll ans = LONG_LONG_MAX;
    for(int same = 0; same < n; same += 1){
        ll needDc = (prefix[n - 1] - mxSm), curr = vc[0] + (prefix[n - 1] - prefix[n - 1 - same]), value;
        value = vc[0] - acFl((curr - needDc), (ll)(same + 1));

        ans = min(ans, max((ll)0, value) + (ll)same);
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}