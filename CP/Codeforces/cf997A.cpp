#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll x, y; cin >> n >> x >> y;
    string s; cin >> s;

    int l = 0, r = n - 1;
    while(l < n && s[l] == '1') l += 1;
    while(r >= 0 && s[r] == '1') r -= 1;
    r += 1;

    if(l == n){
        cout << 0; return;
    }

    int cnt1 = 0;
    for(int i = l; i < r; i += 1){
        while(i < r && s[i] == '0') i += 1;
        if(i < r) cnt1 += 1;

        while(i < r && s[i] == '1') i += 1;
        i -= 1;
    }

    ll ans = LONG_LONG_MAX;
    for(int i = cnt1; i >= 0; i -= 1){
        ll curr = (ll)(cnt1 - i)*x + (ll)(i + 1)*y;
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