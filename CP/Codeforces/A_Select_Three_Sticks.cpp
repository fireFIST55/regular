#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll a, ll b, ll c){
    ll x = abs(c - a) + abs(c - b), y = abs(b - c) + abs(b - a), z = abs(a - b) + abs(a - c);
    ll ans = min(x, min(y, z));
    if(a == b && b == c) ans = 0;
    return ans;
}

void solve(){
    int n; cin >> n;
    ll mn = LONG_LONG_MAX;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i; 
    sort(vc.begin(), vc.end());
    for(int i = 1; i < n; i += 1){
        if(i + 1 < n) mn = min(mn, calc(vc[i - 1], vc[i], vc[i + 1]));
    }
    cout << mn << '\n';
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