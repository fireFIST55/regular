#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    int n;
    ll ans = 1;
    cin>> n;
    vector<ll>vc(n), suf(n);

    for(ll &X: vc) cin>> X;

    for(int i = n - 1; i>=0; i -= 1){
        if(i == n - 1)  suf[i] = vc[i];
        else suf[i] = __gcd(suf[i + 1], vc[i]);
    }

    for(int i = 0; i<n; i += 1){
        if(!i)  ans = suf[i];
        else ans = ((ans * suf[i])/(__gcd(ans, suf[i])));
    }

    cout<<ans<<endl;
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