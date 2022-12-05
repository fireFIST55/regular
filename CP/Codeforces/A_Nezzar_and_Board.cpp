#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; ll k; cin >> n >> k;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    ll g = 0;
    for(int i = 1; i < n; i += 1) g = __gcd(g, vc[i] - vc[0]);
    if(!((k - vc[0]) % g)) cout << "YES\n";
    else cout << "NO\n";
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