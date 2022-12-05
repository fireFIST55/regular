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

ll khela(ll n){
    return n*(n + 1)/2;
}

void solve(){
    ll k, x;
    cin>> k>> x;
    ll left = 1, right = 2*k - 1, mid, ans = 2*k - 1;

    while(left <= right){
        mid = (left + right)>>1;
        if((mid >= k && khela(k) + khela(k - 1) - khela(2*k - 1 - mid)>= x) || (mid < k && khela(mid) >= x)){
            right = mid - 1;
            ans = mid;
        }
        else    left = mid + 1;
    }

    cout<<ans <<endl;
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