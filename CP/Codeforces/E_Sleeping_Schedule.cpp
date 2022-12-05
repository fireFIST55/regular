#include<bits/stdc++.h>
#define ll long long
using namespace std;

int l, r;
int calc(int n){
    if(n >= l && n <= r) return 1;
    return 0;
}

void solve(){
    int n, h, sum = 0; cin >> n >> h >> l >> r;
    vector<int>vc(n);
    vector<vector<int>>dp(n + 1, vector<int>(n + 1, INT_MIN)); dp[0][0] = 0;
    for(int &i: vc) cin >> i;

    for(int i = 0; i < n; i += 1){
        sum += vc[i];
        for(int j = 0; j <= n; j += 1){
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + calc((sum - j) % h));
            if(j + 1 <= n) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + calc((sum - j - 1) % h));
        }
    }

    cout << *max_element(dp[n].begin(), dp[n].end()) << '\n';
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