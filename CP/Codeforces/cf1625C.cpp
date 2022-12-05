#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, l, k; cin >> n >> l >> k;
    vector<vector<ll>>dp(n + 1, vector<ll>(k + 1, 1e9));
    vector<ll>x(n + 1), speed(n);
    for(int i = 0; i < n; i += 1) cin >> x[i];

    x[n] = l; dp[0][0] = 0;
    for(int i = 0; i < n; i += 1){
        cin >> speed[i];
        dp[i + 1][0] = dp[i][0] + speed[i]*(x[i + 1] - x[i]);
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j <= k; j += 1){
            for(int pos = i + 1; pos <= n; pos += 1){
                if(j + pos - 1 - i <= k) dp[pos][j + pos - 1 - i] = min(dp[pos][j + pos - 1 - i], dp[i][j] + speed[i]*(x[pos] - x[i]));
                else break;
            }
        }
    }

    ll ans = LONG_LONG_MAX;
    for(int i = 0; i <= k; i += 1) ans = min(ans, dp[n][i]);
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