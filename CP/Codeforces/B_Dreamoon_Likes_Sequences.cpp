#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int d;
    ll m, ans = 1; cin >> d >> m;
    for(ll k = 0; k < 30; k += 1){
        if(d >= (1 << k)){
            ans = (ans * (ll)(min((1 << (k + 1)) - 1, d) - (1 << k) + 2)) % m; 
        }
        else break;
    }
    ans -= (ll)1;
    if(ans < 0) ans += m;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}