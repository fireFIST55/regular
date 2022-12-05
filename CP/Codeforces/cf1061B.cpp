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
    ll m, ans = 0, prev = 0;
    cin>> n>> m;
    vector<ll>vc(n);
    for(ll &X: vc)  cin>> X;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        ans += vc[i] - 1;
        if(prev < vc[i]) prev += 1;
    }

    if(prev < vc[n - 1])    ans -= (vc[n - 1] - prev);
    cout<< ans<< endl;
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