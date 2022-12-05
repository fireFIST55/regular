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

ll calc1(vector<ll>pos, int k){
    int n = pos.size();
    ll ans = 0;
    for(int i = n - 1; i >= 0; i -= k){
        ans += pos[i];
    }

    return ans;
}

void solve(){
    ll a, ans = 0;
    int  n, k;
    cin>> n>> k;
    vector<ll>pos, neg;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        if(a > 0) pos.push_back(a);
        else if(a < 0) neg.push_back(-a);
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());
    int nn = neg.size(), m = pos.size();

    if(m)  ans = (ll)2*calc1(pos, k);
    if(nn)  ans += (ll)2*calc1(neg, k);

    if(nn && m)    ans -= max(neg[nn - 1], pos[m - 1]);
    else ans -= (nn?neg[nn - 1]: pos[m - 1]);
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