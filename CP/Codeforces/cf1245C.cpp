#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

void solve(){
    string s; cin >> s;
    int n = s.length();
    vector<ll>dp(n + 1);

    dp[0] = dp[1] = 1;
    if(s[0] == 'm' || s[0] == 'w'){
        cout << 0 << '\n';
        return;
    }
    for(int i = 1; i < n; i += 1){
        if(s[i] == s[i - 1] && (s[i] == 'u' || s[i] == 'n')){
            dp[i + 1] = (dp[i - 1] + dp[i]) % MOD;
        }
        else dp[i + 1] = dp[i];

        if(s[i] == 'm' || s[i] == 'w'){
            cout << 0 << '\n';
            return;
        }
    }

    cout << dp[n] << '\n';
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