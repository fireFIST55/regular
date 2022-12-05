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
    ull n, m, g, q, k1, k2;
    cin>> n>> m>> q;
    g = __gcd(n, m);
    k1 = n/g, k2 = m/g;

    while(q--){
        ull x1, y1, x2, y2;
        cin>> x1>> y1>> x2>> y2;

        x1 == 1?x1 = k1: x1 = k2;
        x2 == 1?x2 = k1: x2 = k2;
        ((y1 + x1 - 1)/x1 == (y2 + x2 - 1)/x2)?cout<<"YES\n": cout<<"NO\n";
    }
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