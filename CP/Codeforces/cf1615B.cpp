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

vector<vector<int>>dp(200005, vector<int>(31, 0));

void fun(){
    for(int j = 1; j <200003; j += 1){
        for(int i = 30; i >= 0; i -= 1){
            dp[j][i] += dp[j - 1][i];
            dp[j][i] += ((j&(1<<i))?1: 0);
        }
    }
}

void solve(){
    int l, r, mn = INT_MAX;
    cin>> l>> r;
    for(int i = 30; i >= 0; i -= 1){
        // cout<< dp[r][i] - dp[l - 1][i]<<endl;
        mn = min(mn, r - l + 1 - dp[r][i] + dp[l - 1][i]);
    }

    cout<< mn<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    fun();

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}