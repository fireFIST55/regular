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

int fn(int n, int m){
    return min(n*(m/3 + ((m%3)?1: 0)), m*(n/3 + ((n%3)?1: 0)));
}
void solve(){
    int n, m, ans = INT_MAX;
    cin>> n>> m;
    if(n == 1 || m == 1)    ans = fn(n, m);
    else    ans = min(ans, min(m*(n/3) + fn(n%3, m), n*(m/3) + fn(n, m%3)));

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