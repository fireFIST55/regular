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
    int n, tot;
    ll k, sum = 0, ans = INT_MAX;
    cin>> n>> k;
    vector<ll>vc(n), dp(n + 1);
    for(int i = 0; i < n; i += 1)   cin>> vc[i];
    sort(vc.begin(), vc.end());
    for(int i = n - 1; i >= 0; i -= 1) dp[i] += dp[i + 1] + vc[i];

    ans = dp[0] - k;
    if(dp[0] <= k){
        cout<< 0<< endl;
        return;
    }
    for(int i = 0; i < n; i += 1){
        ll curr = dp[0] - k - dp[n - i] + i*vc[0];
        if(curr <= 0) ans = min(ans, (ll)i);
        else{
            curr = curr;
        }
    }

    cout<< ans<< endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}