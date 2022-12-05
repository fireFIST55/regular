#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>oc, empt;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        if(a) oc.emplace_back(i);
        else empt.emplace_back(i);
    }
    n = oc.size();
    int m = empt.size();
    vector<vector<ll>>dp(n + 5, vector<ll>(m, INT_MAX));
    for(int i = 0; i < m; i += 1) dp[0][i] = 0;

    for(int i = 1; i <= n; i += 1){
        for(int j = i - 1; j < m; j += 1){
            if(j){
                dp[i][j] = min(dp[i][j - 1], dp[i][j]);
                dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + abs(oc[i - 1] - empt[j]));
            }
            else dp[i][j] = abs(oc[i - 1] - empt[j]);
        }
    }
    ll ans = INT_MAX;
    for(int i = n - 1; i < m; i += 1) ans = min(ans, dp[n][i]);
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