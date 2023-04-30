#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, cnt = 0; cin >> a >> b;
    if(a < b) swap(a, b);
    ll ans = 0;
    while(b > 0){
        ans += (a / b); a %= b;
        swap(a, b);
    }
    cout << ans - 1 << '\n';
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