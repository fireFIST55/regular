#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll k, ans, n; cin >> n >> k;
    vector<ll>mushr(n), prefix(n);
    for(int i = 0; i < n; i += 1){
        cin >> mushr[i];
        prefix[i] = i?prefix[i - 1]: 0; prefix[i] += mushr[i];
    }

    if(k < n){
        ll mx = LONG_LONG_MIN;
        for(int i = k - 1; i < n; i += 1) mx = max(mx, prefix[i] - (i - k >= 0?prefix[i - k]: (ll)0));
        ans = mx + k*(k - (ll)1)/(ll)2; cout << ans << '\n';
    }
    else{
        ans = prefix[n - 1] + n*k - (n*(n + (ll)1)/(ll)2); cout << ans << '\n';
    }
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