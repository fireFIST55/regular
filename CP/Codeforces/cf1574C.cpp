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
    ll sum = 0;
    int n, m;
    cin>> n;
    vector<ll>heroes(n);
    for(ll &X: heroes)  cin>> X, sum += X;
    sort(heroes.begin(), heroes.end());

    ll def, att;
    cin>> m;
    while(m--){
        cin>> def>> att;
        ll ans = LONG_LONG_MAX;
        int index = lower_bound(heroes.begin(), heroes.end(), def) - heroes.begin();
        ll extra, extra1;
        if(index > 0){
            extra1 = sum - heroes[index - 1] >= att ?0: att - sum + heroes[index - 1];
            extra1 += (heroes[index - 1] >= def? 0: def - heroes[index - 1]); 
            ans = extra1;
        }  
        if(index<n){
            extra = sum - heroes[index] >= att? 0: att - sum + heroes[index];
            extra += (heroes[index] >= def? 0: def - heroes[index]);
            ans = min(ans, extra);
        }
        cout<<ans<<endl;
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