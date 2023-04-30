#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>vc(n);
    vector<vector<int>>dp(n, vector<int>(k + 5, 0));
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    
    for(int i = 0; i < n; i += 1){
        for(int j = 1; j <= k; j += 1){
            if(!i) dp[i][j] = 1;
            else{
                int cnt = max(dp[i - 1][j], dp[i][j - 1]);
                int index = lower_bound(vc.begin(), vc.end(), vc[i] - 5) - vc.begin(); 
                if(vc[index] + 5 >= vc[i]) index -= 1;
                dp[i][j] = max(cnt, (index >= 0?dp[index][j - 1]: 0) + (i - index));
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= k; i += 1) ans = max(ans, dp[n - 1][i]);
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