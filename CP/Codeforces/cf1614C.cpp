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

ll bigMOD(ll a, ll b){
    if(!b)  return 1;

    ll x = bigMOD(a, b/2)%MOD;
    x = (x * x)%MOD;
    if(b&1) x = (x * a)%MOD;

    return x;
}

void solve(){
    int l, r, x, n, m;
    ll ans = 0, k, Or = 0;
    cin>> n>> m;
    k = bigMOD(2, n - 1);
    map<int, int>freq;

    while(m--){
        cin>> l>> r>> x;
        Or |= x;
    }
    ans = (Or*k)%MOD;
    cout<<ans<<endl;
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