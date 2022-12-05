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

bool fun(ll a, ll b, ll x){
    if(a < b) swap(a, b);
    if(a == x || b == x) return true;
    else if(a < x || !a || !b) return false;
    
    if(a%b == x%b) return true;
    return fun(a%b, b, x);
}

void solve(){
    ll a, b, x;
    cin>> a>> b>> x;

    if(fun(a, b, x))    cout<<"YES\n";
    else cout<<"NO\n";
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