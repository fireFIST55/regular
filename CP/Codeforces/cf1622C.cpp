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
    int n;
    ll k, sum = 0, ans;
    cin>> n>> k;
    vector<ll>vc(n), dp(n + 1);
    for(ll &X: vc)  cin>> X;

    sort(vc.begin(), vc.end());
    for(int i = 0; i < n; i += 1){
        sum += vc[i];
        dp[i + 1] += dp[i] + vc[i];
    }

    if(sum > k) ans = sum - k;
    else{
        // cout<<"Baba ki ekhane dhukso?\n";
        cout<< 0<< endl;
        return;
    }

    ll left = 1, right = sum - k, mid;
    while(left <= right){
        bool yes = 0;
        int left1 = 0, right1 = n - 1, mid1;
        mid = (left + right)/(ll)2;
        ll curr = vc[0] - mid;

        while(left1 <= right1){
            mid1 = (left1 + right1) >> 1;

            if(sum - (dp[n] - dp[n - mid1] + vc[0]) + (ll)(mid1 + 1)*curr <= k){
                ans = min(mid + (ll)mid1, ans);
                right1 = mid1 - 1;
                yes = 1;
            }
            else left1 = mid1 + 1;
        }

        if(yes) right = mid - 1;
        else left = mid + 1;
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