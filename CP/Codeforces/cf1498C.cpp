#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long
#define endl '\n'

#define MOD 1000000007
const int N = 1001;
const int K = 1001;

int n, k, dp[N][K][2];
#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

int task(int curr, int k, int d){
    if(k == 1) return 1;
    if(dp[curr][k][d] != - 1) return dp[curr][k][d];

    int ans = 2;
    if(d == 1){
        if(curr < n) ans = (ans + task(curr + 1, k, d) - 1) % MOD;

        if(curr > 1) ans = (ans + task(curr - 1, k - 1, 1 - d) - 1) % MOD;

        dp[curr][k][d] = ans;
    }
    else{
        if(curr > 1) ans = (ans + task(curr - 1, k, d) - 1) % MOD;

        if(curr < n) ans = (ans + task(curr + 1, k - 1, 1 - d) - 1) % MOD;

        dp[curr][k][d] = ans;
    }

    return ans;
}

void task(){
    cin>> n>> k;
    memset(dp, - 1, sizeof(dp));
    int ans = task(1, k, 1); 
    cout<< ans<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        task();
    
    return 0;
}