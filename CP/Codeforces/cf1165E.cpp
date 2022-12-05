#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll M = 998244353;

void solve(){
    int n; cin >> n;
    vector<ll>a, b(n);
    
    for(int i = 0; i < n; i += 1){
        ll x; cin >> x;
        a.push_back((ll)(n - i)*(ll)(i + 1)*x);
    }

    for(ll &i: b) cin >> i;
    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end());
    
    ll ans = 0;
    for(int i = 0; i < n; i += 1) ans = (ans + (a[i]%M*b[i]%M)%M)%M;
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