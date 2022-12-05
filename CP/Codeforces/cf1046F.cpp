#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll ans = 0,  pf, fees; cin >> n;
    vector<ll>wallets(n);
    for(ll &i: wallets) cin >> i;
    cin >> pf >> fees;

    for(int i = 0; i < n; i += 1){
        if(wallets[i] > pf){
            ll x = (wallets[i]/(fees + pf));
            if(wallets[i]%(fees + pf) > pf) x += (ll)1;
            
            ans += x*fees;
        }
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