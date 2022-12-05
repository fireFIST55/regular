#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define endl '\n'
#define ll long long

void solve(){
    int n, m;
    cin>> n>> m;
    vector<ll>dp(n + 5), sm(n + 5);
    sm[n] = dp[n] = 1;

    for(int i = n - 1; i>=1; i -= 1){
        dp[i] = ( dp[i] + sm[i + 1] );
        
        for(int k = 2; k<=n; k += 1){
            int l = min(n, i*k);
            int r = min(n, i*k + k - 1);
            if(i*k>n)   break;
            dp[i] = ( dp[i] + sm[l] - sm[r + 1] )%m;
        }

        sm[i] = ( sm[i + 1] + dp[i] )%m;
    }
    cout<<dp[1]<<endl;
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