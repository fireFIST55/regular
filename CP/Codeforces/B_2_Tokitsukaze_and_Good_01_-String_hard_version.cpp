#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int>cnt0(n), cnt1(n);
    vector<vector<int>>dp(n, vector<int>(2, 0));
    for(int i = 0; i < n / 2; i += 1){
        int x = i?dp[i - 1][0]: 0;
        int y = i?dp[i - 1][1]: 0, z = (s[i * 2] == '1') + (s[i * 2 + 1] == '1');
        if(x > y){
            dp[i][0] = y + z; cnt0[i] = (i?cnt1[i - 1]: 0) + 1;
        }
        else{
            dp[i][0] = x + z; cnt0[i] = (i?cnt0[i - 1]: 1);
        }
        
        z = (s[i * 2] == '0') + (s[i * 2 + 1] == '0');
        if(x >= y){
            dp[i][1] = y + z; cnt1[i] = (i?cnt1[i - 1]: 1);
        }
        else{
            dp[i][1] = x + z; cnt1[i] = (i?cnt0[i - 1]: 0) + 1;
        }
    }

    if(dp[n/2 - 1][0] < dp[n/2 - 1][1]) cout << dp[n/2 - 1][0] << " " << cnt0[n/2 - 1] << '\n';
    else if(dp[n/2 - 1][0] > dp[n/2 - 1][1]) cout << dp[n/2 - 1][1] << " " << cnt1[n/2 - 1] << '\n';
    else cout << dp[n/2 - 1][0] << " " << min(cnt0[n/2 - 1], cnt1[n/2 - 1]) << '\n';
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