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

ull bigMOD(ull a, ull b){
    if(!b)  return 1;
    ull x = bigMOD(a, b/2);
    x = x * x;
    if(b&1) x *= a;

    return x;
}

void solve(){
    ull sum1 = 0, ans = 0;
    int n, total = 0;
    cin>> n;
    vector<int>cnt(n);
    vector<ull>vc(n), dp(n + 1);
    for(ull &X: vc)  cin>> X;
    sort(vc.begin(), vc.end());
    
    for(int i = 0; i < n; i += 1){
        ull x = vc[i];
        if(!(vc[i]%(ull)2)){
            int count = 0;
            while(!(x%(ull)2)){
                x/=(ull)2;
                count += 1;
            }
            total += cnt[i] = count;
        }
        dp[i] = x;
        sum1 += x;
    }
    
    for(int i = 0; i < n; i += 1){
        if(vc[i]%(ull)2)
            ans = max(ans, vc[i]*bigMOD(2, total) + sum1 - vc[i]);
        else ans = max(ans, vc[i]*bigMOD(2, total - cnt[i]) + sum1 - dp[i]);
    }
    
    cout<<ans<<endl;
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