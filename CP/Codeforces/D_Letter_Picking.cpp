#include<bits/stdc++.h>
#define ll long long
using namespace std;

int cmp(char a, char b){
    int x = (a < b)?-1: (a > b)?1: 0;
    return x;
}

void solve(){
    string s; cin >> s;
    int n = s.length();
    vector<vector<int>>dp(n + 5, vector<int>(n + 5));

    for(int len = 2; len <= n; len += 2){
        for(int i = 0; i + len - 1 < n; i += 1){
            int khela = - 1, r = i + len;
            if(dp[i + 1][r - 1]) khela = max(khela, dp[i + 1][r - 1]);
            else khela = max(khela, cmp(s[i], s[r - 1]));

            if(dp[i + 2][r]) khela = max(khela, dp[i + 2][r]);
            else khela = max(khela, cmp(s[i], s[i + 1]));
            dp[i][r] = khela;

            khela = - 1;
            if(dp[i + 1][r - 1]) khela = max(khela, dp[i + 1][r - 1]);
            else khela = max(khela, cmp(s[r - 1], s[i]));

            if(dp[i][r - 2]) khela = max(khela, dp[i][r - 2]);
            else khela = max(khela, cmp(s[r - 1], s[r - 2]));
            dp[i][r] = min(dp[i][r], khela);
        }
    }

    if(dp[0][n] == - 1) cout << "Alice\n";
    else if(dp[0][n]) cout << "Bob\n";
    else cout << "Draw\n";
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