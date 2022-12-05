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
    ll h, left, right, mid, ans;
    cin>> n>> h;
    vector<ll>vc(n), a;
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        if(i) a.push_back(vc[i] - vc[i - 1]);
    }

    left = 1, right = h;
    while(left <= right){
        mid = (left + right)>>1;
        ll at = mid;
        for(int i = 0; i < a.size(); i += 1)    at += min(mid, a[i]);
        if(at >= h){
            ans = mid;
            right = mid - 1;
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