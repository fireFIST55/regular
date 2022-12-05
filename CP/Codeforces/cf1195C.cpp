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
    int x, n;
    cin>> n;
    vector<int>a(n);
    vector<ll>dp1(n + 1), dp2(n + 1), dp3(n + 1);
    for(int &X: a)  cin>> X;

    for(int i = 1; i <= n; i += 1){
        cin>> x;
        dp1[i] = max(max((ll)a[i - 1] + dp2[i - 1], dp3[i - 1] + (ll)a[i - 1]), (ll)a[i - 1]);
        dp2[i] = max(max(dp1[i - 1] + (ll)x, dp3[i - 1] + (ll)x), (ll)x);
        dp3[i] = max(dp1[i - 1], dp2[i - 1]);
    }

    cout<<max(max(dp1[n], dp2[n]), dp3[n])<<endl;
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