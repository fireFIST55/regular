#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int m, ans = INT_MAX;
    cin>> m;
    vector<vector<int>>ar(2, vector<int>(m + 1, 0)), dp(2, vector<int>(m + 1, 0));

    for(int i = 0; i < 2; i += 1){
        for(int j = 0; j < m; j += 1){
            cin>> ar[i][j];

            dp[i][j] = ar[i][j];
            if(j)   dp[i][j] += dp[i][j - 1];
        }
    }

    int tot = 0, b;
    for(int i = 0; i < m; i += 1){
        tot += ar[0][i];
        b = max(dp[0][m - 1] - tot, (i?dp[1][i - 1]:0));
        ans = min(ans, b);
    }
    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}