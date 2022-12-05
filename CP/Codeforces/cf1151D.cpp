#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<ll, int>>vp1, vp2;
    for(int i = 0; i < n; i += 1){
        ll x, y; cin >> x >> y;
        vp1.emplace_back(x - y, i); vp2.emplace_back(x, y);
    }

    ll ans = 0;
    sort(vp1.begin(), vp1.end(), greater<pair<ll, int>>());
    for(int i = 0; i < n; i += 1){
        int k = vp1[i].second;
        ans += vp2[k].first*(ll)i + vp2[k].second*(ll)(n - i - 1);
    }

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