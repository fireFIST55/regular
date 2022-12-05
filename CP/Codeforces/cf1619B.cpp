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
    ll n;
    cin>> n;
    set<ll>st;
    for(ll i = 1; i*i <= n; i += 1){
        if(i*i <= n) st.insert(i*i);
    }

    for(ll i = 1; i*i*i <= n; i += 1){
        if(i*i*i <= n) st.insert((i*i*i));
    }

    cout<< st.size() << endl;
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