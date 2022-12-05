#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), b(n), c(n);
    for(ll &i: vc) cin >> i;
    for(int i = 0; i < n - 1; i += 1){
        c[i] = b[i] = abs(vc[i] - vc[i + 1]); 
    }

    for(int i = 0; i < n - 1; i += 1){
        if(i%2) b[i] = - b[i];
        else c[i] = - c[i];
    }

    ll l = 0, r = 0, ans = 0;
    for(int i = 0; i < n - 1; i += 1){
        l += b[i]; r += c[i]; ans = max(ans, max(l, r));
        if(l < 0) l = 0;
        if(r < 0) r = 0;
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