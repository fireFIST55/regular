#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll>vc(k);
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        vc[i % k] = max(vc[i % k], a);
    }

    ll ans = 0;
    for(int i = 0; i < k; i += 1) ans += vc[i];
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