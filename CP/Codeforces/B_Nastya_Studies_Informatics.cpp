#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x, y, l, r; cin >> l >> r >> x >> y;
    if(y % x){
        cout << 0 << '\n';
        return;
    }

    int n = y / x, ans = 0;
    for(int c = 1; c * c <= n;  c += 1){
        if(n % c) continue;
        int d = n / c;
        if(c * x >= l && c * x <= r && d * x >= l && d * x <= r && __gcd(c, d) == 1){
            if(c == d) ans += 1;
            else ans += 2;
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