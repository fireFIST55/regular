#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m, g, z, ans; cin >> n >> m;
    ans = (n * (1 + n)) / (ll)2; g = m + 1; z = n - m;
    ll k = z / g; ans = ans - g * ((k * (1 + k)) / (ll)2) - (z % g) * (1 + k);
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