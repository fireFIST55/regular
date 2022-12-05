#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, count = 0; cin >> n;
    vector<int>cnt(n);
    vector<ll>snow(n), tempr(n), pref(n), store(n);
    for(ll &i: snow) cin >> i;
    for(ll &i: tempr) cin >> i;
    for(int i = 0; i < n; i += 1)
        pref[i] = (i?pref[i - 1] + tempr[i]: tempr[i]);

    
    for(int i = 0; i < n; i += 1){
        int k = lower_bound(pref.begin() + i, pref.end(), (snow[i] + (i?pref[i - 1]: 0))) - pref.begin();
        if(k == n) continue;

        cnt[k] += 1; store[k] += (k == i?snow[i]: snow[i] - (pref[k - 1] - (i?pref[i - 1]: 0)));
    }
    for(int i = 0; i < n; i += 1){
        count += cnt[i];
        ll ans = (ll)(i + 1 - count)*tempr[i] + store[i]; cout << ans << ' ';
    }
    cout << '\n';
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