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
    cin>> n;
    ll mx1 = 0, mx2 = 0, sum = 0, sm1 = 0;
    vector<ll> vc(n);

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        sum += vc[i];
        if(i < n - 1 && sm1 + vc[i] > 0) sm1 += vc[i], mx1 = max(sm1, mx1);
        else sm1 = 0;
    }

    sm1 = 0;
    for(int i = n - 1; i; i -= 1){
        if(sm1 + vc[i] > 0) sm1 += vc[i], mx2 = max(sm1, mx2);
        else sm1 = 0;
    }

    (mx1 >= sum || mx2 >= sum)?cout<<"NO\n": cout<<"YES\n";
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