#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int t;
    cin >> t;
    bool srtd;
    ll ans = (ll)t*(ll)t;
    vector<pair<int, int>>vp;

    for(int i = 0; i < t; i += 1){
        srtd = 0;
        int n, last = 1e6; cin >> n;
        vector<int>vc(n);
        for(int &i: vc){
            cin >> i;
            if(last < i) srtd = 0;
            last = i;
        }

        if(srtd)    vp.emplace_back(vc.back(), vc[0]);
    }

    sort(vp.begin(), vp.end());
    for(int i = 0; i < vp.size(); i += 1){
        pair<int, int> pi = {vp[i].second, - 1};
        ans -= vp.end() - lower_bound(vp.begin(), vp.end(), pi);
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