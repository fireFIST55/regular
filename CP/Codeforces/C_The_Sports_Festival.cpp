#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    vector<vector<ll>>dp(n + 5, vector<ll>(n + 5));
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    
    for(int i = 1; i <= n; i += 1){
        for(int j = i - 1; j < n; j += 1){
            int l = j - i + 1, r = j;
            dp[l][r] = ((l + 1 < n && r >= 0)?min(dp[l + 1][r], dp[l][r - 1]): (ll)0) + vc[r] - vc[l];
        }
    }
    cout << dp[0][n - 1] << '\n';
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