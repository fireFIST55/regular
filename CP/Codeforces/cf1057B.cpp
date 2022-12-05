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
    bool found = 0;
    int a, n, ans = 0;
    cin>> n;
    vector<int>dp(n + 1);
    for(int i = 0; i < n; i += 1){
        cin>> a;
        dp[i + 1] += dp[i] + a;
    }

    for(int i = n; i >= 1 && !found; i -= 1){
        for(int j = n; j - i>= 0; j -= 1){
            if(dp[j] - dp[j - i] > i*100){
                cout<< i<<endl;
                return;
            }
        }
    }
    cout<< ans<< endl;
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