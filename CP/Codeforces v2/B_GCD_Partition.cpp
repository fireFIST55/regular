#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n), prefix(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; prefix[i] = (i?prefix[i - 1]: 0LL) + vc[i];
    }
    ll ans = 0;
    for(int i = 0; i < n - 1; i += 1) ans = max(ans, __gcd(prefix[i], prefix[n - 1] - prefix[i]));
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}