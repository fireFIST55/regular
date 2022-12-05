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

ull bigMOD(ull a, ull b){
    if(!b)  return 1;

    ull x = bigMOD(a, b/2)%MOD;
    x = (x * x)%MOD;
    if(b&1) x = (x * a)%MOD;

    return x;
}

void solve(){
    ull n;
    cin>>n;
    ull p = pow((ull)2, n) + .000001;
    ull ans = (bigMOD(4, p - 2) * (ull)6)%MOD;
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