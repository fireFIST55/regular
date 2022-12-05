#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n;
    ll ans = 0;
    cin>> n;
    vector<int>tt(n + 1), td(n + 1), topic(n), dif(n);
    for(int i = 0; i<n; i += 1){
        cin>> topic[i]>> dif[i];
        tt[topic[i]] += 1;
        td[dif[i]] += 1;
    }

    ans = (n * (ll)1 * (n - 1) * (n - 2))/6;
    for(int i = 0; i<n; i += 1)
        ans -= (tt[topic[i]] - 1)*(ll)1*(td[dif[i]] - 1);

    cout<<ans<<endl;
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