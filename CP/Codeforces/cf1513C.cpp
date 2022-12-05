#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'
#define M 200015
vector<ll>dp(M, 0);

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void fn(){
    for(int i = 0; i<9; i += 1) dp[i] = 2;
    dp[9] = 3;
    for(int i = 10; i < M; i += 1)  dp[i] = (dp[i - 9] + dp[i - 10])%MOD;
}

void solve(){
    int n, m;
    ll ans = 0;
    cin>> n>> m;
    while(n){
        ans = (ans + ((n%10 + m)<10?1: dp[n%10 + m - 10]))%MOD;
        n /= 10;
    }

    cout<<ans<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    fn();

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}