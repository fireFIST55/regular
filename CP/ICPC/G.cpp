#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, r; cin >> n >> r; 
    vector<ll>d(n + 5);
    for(int i = 1; i <= n; i += 1) cin >> d[i];
    vector<vector<ll>>dp(n + 5, vector<ll>(n - 1 - r + 5, LONG_LONG_MAX));
    dp[1][0] = 0;
    ll curr = 0;
    for(int i = 2; i <= n; i += 1){
        curr += d[i] - d[i - 1];
        for(int k = 0; k <= min(n - 1 - r, i - 1); k += 1){
            if(k) dp[i][k] = min(((k == i - 1)?LONG_LONG_MAX: 2 * dp[i - 1][k] + d[i] - d[i - 1]), dp[i - 1][k - 1]);
            else dp[i][k] = curr;
            cout << dp[i][k] << " ";
        }
        cout << endl << endl;
    }
    cout << dp[n][n - 1 - r] << '\n'; 
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