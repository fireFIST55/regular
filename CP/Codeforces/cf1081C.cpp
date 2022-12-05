#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 998244353

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n, m, k;
    cin>> n>> m>> k;
    vector<vector<ll>>dp(n + 5, vector<ll>(k + 5));
    dp[1][0] = m;

    for(int i = 1; i < n; i += 1){
        for(int j = 0; j <= k; j += 1){
            dp[i + 1][j] = ( dp[i][j] + dp[i + 1][j]) % MOD;
            dp[i + 1][j + 1] = ( dp[i][j]*(m - 1)) %MOD;
        }
    }

    cout<< dp[n][k]<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while(t--)
        solve();
    
    return 0;
}