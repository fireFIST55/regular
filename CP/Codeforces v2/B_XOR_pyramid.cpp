#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>>dp(n + 5, vector<int>(n + 5, 0));
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        dp[0][i] = a;
    }
    for(int i = 1; i < n; i += 1){
        for(int j = 0; j <= n - i; j += 1){
            dp[i][j] = dp[i - 1][j] ^ dp[i - 1][j + 1];
        }
    }
    for(int i = 1; i < n; i += 1){
        for(int j = 0; j <= n - i; j += 1){
            dp[i][j] = max({dp[i][j], dp[i - 1][j], dp[i - 1][j + 1]});
        }
    }
    int q; cin >> q;
    for(int i = 1; i <= q; i += 1){
        int l, r; cin >> l >> r;
        int m = r - l;
        cout << dp[m][--l] << '\n';
    }
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