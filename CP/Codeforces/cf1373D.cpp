#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll ans = 0;
    int n;  cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc)  cin >> i;
    vector<vector<ll>>dp(n + 1, vector<ll>(3));
    for(int i = 0; i < n; i += 1){
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + ((i&1)?0: vc[i]));
        if(i + 2 <= n)  dp[i + 2][1] = max(dp[i + 2][1], max(dp[i][0], dp[i][1]) + (i&1?vc[i]: vc[i + 1]));
        dp[i + 1][2] = max(dp[i + 1][2], max(dp[i + 1][0], max(dp[i + 1][0], dp[i + 1][2])) + (i&1?0: vc[i]));
    }

    ans = max(dp[n][0], max(dp[n][1], dp[n][2]));
    cout << ans <<'\n';
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