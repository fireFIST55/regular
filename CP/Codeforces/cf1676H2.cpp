#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll ans = 0;
    int n; cin >> n;
    ordered_set<int>Os; map<int, int>mp;
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        Os.insert(a); ans += (ll)(Os.order_of_key(a)) + (ll)mp[a];
        mp[a] += 1;
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}