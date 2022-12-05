#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, z, ans = 0;   cin >> n >> k >> z;
    vector<int>vc(n), dp(n), mx(n);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        dp[i] = (i?dp[i - 1]: 0) + vc[i];
        if(i) mx[i] = max(mx[i - 1], vc[i] + vc[i - 1]);
    }

    ans = dp[k];
    for(int i = 1; i <= z && k - 2*i >= 0; i += 1){
        ans = max(ans, dp[k - 2*i] + i*mx[k - 2*i + 1]);
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}