#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), dp(n, INT_MAX);
    for(int &i: vc) cin >> i;

    for(int i = 0; i < n; i += 1){
        if(!vc[i]){
            dp[i] = i?dp[i - 1]: 0; continue;
        }

        dp[i] = min(dp[i], (i?dp[i - 1]: 0) + 1);
        int khela = vc[i]; int r = i + 1;
        while(r < n){
            khela ^= vc[r++];
            if(!khela)  dp[r - 1] = min(dp[r - 1], (i - 1 >= 0? dp[i - 1]: 0) + (r - i - 1));
        }
    }
    cout << dp[n - 1] << '\n';
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