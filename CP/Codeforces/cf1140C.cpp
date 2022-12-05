#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<ll, ll>>vp;
    for(int i = 0; i < n; i += 1){
        ll a, b; cin >> a >> b; vp.emplace_back(b, a);
    }
    sort(vp.begin(), vp.end());

    ll sm = 0, ans = 0;
    set<pair<ll, int>>sp;
    for(int i = n - 1; i >= 0; i -= 1){
        sm += vp[i].second; sp.insert({vp[i].second, i});
        if(sp.size() > k){
            sm -= sp.begin()->first; sp.erase(sp.begin());
        }

        ans = max(ans, sm*vp[i].first);
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