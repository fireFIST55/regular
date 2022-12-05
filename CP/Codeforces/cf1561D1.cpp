#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define endl '\n'

void solve(){
    int n, m, tt = 0;
    cin>>n>>m;
    vector<int>dp(n + 1);

    dp[1] = 1;
    tt = dp[2] = 2;

    for(int i = 3; i<=n; i+=1){
        dp[i] = tt;

        int x = 0;
        for(int j = i; j>=2; j--)
            x += (dp[i/j])%m;

        dp[i] = (dp[i] + x)%m;
        tt = (tt + dp[i])%m;
    }

    cout<<dp[n]<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    while(t--)
        solve();
    
    return 0;
}