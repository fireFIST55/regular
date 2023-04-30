#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll phi(ll n){
    ll result = n;
    for(ll i = 2; i * i <= n; i += 2){
        if(!(n % i)){
            while(!(n % i)) n /= i;
            result -= result / i;
        }
    
        if(i == 2) i -= 1;
    }
    if(n > 1) result -= result / n;
    return result;
}

void solve(){
    ll a, b; cin >> a >> b;
    cout << phi(b / __gcd(a, b)) << '\n';
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
