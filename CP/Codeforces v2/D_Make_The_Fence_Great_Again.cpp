#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<pair<ll, ll>>vp;
    vector<vector<ll>>dp(n, vector<ll>(3, LONG_LONG_MAX));
    for(int i = 0; i < n; i += 1){
        ll a, b; cin >> a >> b;
        vp.emplace_back(a, b);
    }
    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < 3; k += 1){
            if(!i) dp[i][k] = vp[i].second * (ll) k;
            else dp[i][k] = min(dp[i][k], vp[i].second * (ll) k + min(vp[i - 1].first == vp[i].first + k?LONG_LONG_MAX: dp[i - 1][0], min(vp[i - 1].first + 1 == vp[i].first + k?LONG_LONG_MAX: dp[i - 1][1], vp[i - 1].first + 2 ==  vp[i].first + k?LONG_LONG_MAX: dp[i - 1][2])));
        }
    }
    cout << min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2])) << '\n';
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