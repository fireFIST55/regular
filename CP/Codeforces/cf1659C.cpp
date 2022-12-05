#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll a, b; cin >> n >> a >> b;
    vector<ll>vc(n);
    vector<vector<ll>>dp(n, vector<ll>(2, 0));
    for(ll &i: vc) cin >> i;

    ll last = 0;
    for(int i = 0; i < n; i += 1){
        if(!i) dp[i][1] = vc[i]*a + vc[i]*b;
        else if(dp[i - 1][0] + (vc[i] - last)*b + (vc[i] - last)*a >= dp[i - 1][1] + (vc[i] - vc[i - 1])*b + (vc[i] - vc[i - 1])*a)
            dp[i][1] = dp[i - 1][1] + (vc[i] - vc[i - 1])*a + (vc[i] - vc[i - 1])*b;
        else dp[i][1] = dp[i - 1][0] + (vc[i] - last)*a + (vc[i] - last)*b;

        if(!i) dp[i][0] = vc[i]*b;
        else if(dp[i - 1][0] + (vc[i] - last)*b >= dp[i - 1][1] + (vc[i] - vc[i - 1])*b){
            dp[i][0] = (dp[i - 1][1] + (vc[i] - vc[i - 1])*b); last = vc[i - 1]; 
        }
        else dp[i][0] = dp[i - 1][0] + (vc[i] - last)*b;
    }

    ll ans = (n - 1)?min(dp[n - 2][1] + (vc[n - 1] - vc[n - 2])*b, dp[n - 1][0]): dp[n - 1][0];
    cout << ans << '\n';
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