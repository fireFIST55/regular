#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll l, r;

ll khela(ll n){
    ll left = 0, right = n, res = 0;
    while(left <= right){
        ll mid = (left + right) / 2;
        ll x = mid / 2, y = mid - x;
        if(y * r + x * l <= n) left = mid + 1, res = mid;
        else right = mid - 1;
    }
    if(!res && n >= l) res = 1;
    return res;
}

void solve(){
    int n; cin >> n >> l >> r;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    ll moves = 0;
    for(int i = 0; i < n; i += 1){
        moves += khela(vc[i]);
    }
    cout << ((moves & 1)?"First": "Second") << '\n';
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