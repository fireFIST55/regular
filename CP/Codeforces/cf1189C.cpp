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
    int a, n, q;
    cin>> n;
    vector<int>pref(n + 1);
    for(int i = 1; i <= n; i += 1){
        cin>> a;
        pref[i] += pref[i - 1] + a;
    }

    cin>> q;
    int l, r;
    while(q--){
        cin>> l>> r;
        cout<<(pref[r] - pref[l - 1])/10 <<endl;
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