#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

ll fn(ll a, ll b, ll c){
    return ((max(b, c)>=a?(max(b, c) - a + 1): 0));
}

void solve(){
    ll a, b, c;
    cin>> a>> b>> c;
    ll x = fn(a, b, c), y = fn(b, a, c), z = fn(c, a, b);
    cout<<x<<" "<<y<<" "<<z<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}