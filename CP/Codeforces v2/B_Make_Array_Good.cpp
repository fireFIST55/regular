#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<ll, ll>>vp, ans;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        vp.emplace_back(a, i);
    }
    sort(vp.begin(), vp.end());
    for(int i = 1; i < n; i += 1){
        if(vp[i].first == vp[i - 1].first) continue;
        ans.emplace_back(vp[i].second, vp[i - 1].first * 2 - vp[i].first);
        vp[i].first = vp[i - 1].first * 2;
    }
    cout << ans.size() << '\n';
    for(pair<ll, ll>p: ans) cout << p.first + 1 << " " << p.second << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}