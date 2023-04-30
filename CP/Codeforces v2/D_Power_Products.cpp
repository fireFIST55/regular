#include<bits/stdc++.h>
#define ll long long
using namespace std;

pair<ll, ll> khela(ll x, ll k){
    ll ans1 = 1, ans2 = 1;
    for(ll i = 2; i * i <= x; i += (ll)2){
        if(!(x % i)){
            ll cnt = 0;
            while(!(x % i)){
                x /= i; cnt += 1;
            }
            cnt %= k; ans1 *= (ll)pow(i, cnt); ans2 *= (ll)pow(i, cnt?k - cnt: (ll)0);
        }
        if(i == 2) i -= 1;
    }
    if(x > 1){
        ans1 *= x; ans2 *= pow(x, k - 1);
    }
    return {ans1, ans2};
}

void solve(){
    int n, k; cin >> n >> k;
    map<ll, ll>cnt; ll ans = 0;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        pair<int, int>p = khela(a, k);
        if(cnt[p.second]) ans += cnt[p.second];
        cnt[p.first] += (ll)1;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}