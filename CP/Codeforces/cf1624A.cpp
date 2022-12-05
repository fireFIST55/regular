#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll res = 0, mx = INT_MIN, sum = 0, ans = 0;
    cin >> n;
    vector<ll>vc(n);
    for(ll &X: vc)  cin >> X, mx = max(mx, X);
    sort(vc.begin(), vc.end(), greater<ll>());

    for(int i = 0; i < n; i += 1){
        if(vc[i] + res < mx) ans += (mx - vc[i] - res), res += (mx - vc[i] - res);
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}