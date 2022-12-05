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
    int l1, l2, l3;
    cin>> l1>> l2>> l3;
    if(max(l1, max(l2, l3)) == (l1 + l2 + l3 - max(l1, max(l2, l3))) || (l1 == l2 && !(l3&1)) || (l1 == l3 && !(l2&1)) || (l2 == l3 && !(l1&1))) cout<<"YES\n";
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