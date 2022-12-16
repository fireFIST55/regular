#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string a, b, ans; cin >> a >> b;
    int n = a.length(), m = b.length();
    vector<vector<int>>dp(n + 5, vector<int>(m + 5));
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= m; j += 1){
            if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1; 
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = n, j = m;
    vector<int>proh1(n), proh2(m);
    while(i > 0 && j > 0){
        if(a[i - 1] != b[j - 1]){
            if(dp[i][j - 1] > dp[i - 1][j]) j -= 1;
            else i -= 1;
        }
        else if(a[i - 1] == b[j - 1]){
            proh1[i - 1] = 1; proh2[j - 1] = 1;
            ans += a[i - 1]; i -= 1; j -= 1; 
        }
    }
    string ans1, ans2;
    for(int i = 0; i < n; i += 1){
        if(!proh1[i]) ans1 += a[i];
    }
    for(int i = 0; i < m; i += 1){
        if(!proh2[i]) ans2 += b[i];
    }
    cout << dp[n][m] << '\n';
    if(ans1.empty()) cout << "Nil ";
    else cout << ans1 << ' ';
    if(ans2.empty()) cout << "Nil\n";
    else cout << ans2 << '\n';
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