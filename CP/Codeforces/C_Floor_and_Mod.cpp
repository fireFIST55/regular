#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x, y, ans = 0; cin >> x >> y;
    for(ll k = 1; k * k <= x; k += 1){
        ans += max((ll)0, min(y, x / k - 1) - k);
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