#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c, d; cin >> a >> b >> c >> d;
    for(ll i = a + 1; i < c + 1; i += 1){
        ll z = a * b, g = __gcd(z, i), x;
        x = z / g; x = (d / x) * x;
        if(x > b && x <= d){
            cout << i << " " << x << '\n';
            return;
        }
    }
    cout << - 1 << " " << - 1 << '\n';
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