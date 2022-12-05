#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll a, b; cin >> n >> a >> b;
    vector<ll>vc(n), prefix(n);
    for(ll &i: vc) cin >> i;

    for(int i = 0; i < n; i += 1)
        prefix[i] = i?prefix[i - 1] + vc[i]: vc[i];
    
    ll ans = b*prefix[n - 1];
    for(int i = 0; i < n; i += 1){
        ans = min(ans, vc[i]*(a + b) + b*(prefix[n - 1] - prefix[i] - (ll)(n - 1 - i)*vc[i]));
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