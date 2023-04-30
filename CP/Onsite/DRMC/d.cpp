#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, r; cin >> n >> r;
    string s; cin >> s;
    vector<vector<int>>dp(n, vector<int>(r, INT_MAX));
    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < r; k += 1){
            if(!i){
                if(k == (s[i] - 'A')) dp[i][k] = 0;
                else dp[i][k] = 1;
            }
            else{
                if((s[i] - 'A') == k){
                    for(int l = 0; l < 26; l += 1){
                        if(l != k) dp[i][k] = min(dp[i - 1][l], dp[i][k]);
                    }
                }
            }
        }
    }
    int ans = INT_MAX;
    for(int i = 0; i < r; i += 1) ans = min(ans, dp[n - 1][i]);
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