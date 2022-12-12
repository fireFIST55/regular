#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, ans = 0; cin >> n >> m;
    string a, b; cin >> a >> b;
    vector<vector<int>>dp(n + 5, vector<int>(m + 5, 0));
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= m; j += 1){
            if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 2;
            else dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]) - 1);
            ans = max(ans, dp[i][j]);
        }
    }
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