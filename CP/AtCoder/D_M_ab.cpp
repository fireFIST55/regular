#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m, ans; cin >> n >> m;
    ll x = ceil(sqrt(m)), a, b; 
    if(x * x == m) ans = m, a = x, b = x;
    else{
        a = x + 1, b = x + 1; ans = a * b;
        for(ll i = 1; ; i += 1, b -= 1){
            if(a * b >= m) ans = a * b;
            else break;
        }
    }
    if(a <= n) cout << ans << '\n';
    else cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}