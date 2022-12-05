#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll n, l; cin >> n >> l;
    vector<ll>fee(n);
    for(int i = 0; i < n; i += 1){
        cin >> fee[i];
        if(i) fee[i] = min(fee[i], fee[i - 1]*(ll)2);
    }

    ll sum = 0, ans = LONG_LONG_MAX;
    for(int i = n - 1; i >= 0; i -= 1){
        ll need = l / (ll)(1 << i); l -= need * (ll)(1 << i); 
        sum += need * fee[i]; 
        ans = min(ans, sum + (l > 0)*fee[i]);
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