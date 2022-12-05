#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll ans = 0;
    ll c1, c2, sword, axe, ws, wa;
    cin >> c1 >> c2 >> sword >> axe >> ws >> wa;

    for(ll i = 0; i <= sword; i += 1){
        ll ms, ma, fs, fa, a, s; ms = min(c1 / ws, i);
        ma = min(axe, (c1 - ms * ws) / wa); s = sword - i, a = axe - ma;

        if(wa <= ws){
            fa = min(c2 / wa, a), fs = min((c2 - fa * wa)/ ws, s);
        }
        else{
            fs = min(c2 / ws, s), fa = min((c2 - fs * ws)/wa, a);
        }

        ans = max(ans, fa + fs + ma + ms);
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