#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    vector<vector<int>>dp(n + 5, vector<int>(2 * n + 5, 0));
    for(int i = 1; i <= n; i += 1){
        for(int j = i; j < 2 * n + 5; j += 1){
            dp[i][j] = min((j > i)?dp[i][j - 1]: INT_MAX, dp[i - 1][j - 1] + abs(j - vc[i - 1]));
        }
    }
    cout << dp[n][2 * n + 4] << '\n';
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