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
    ll w, h, a, ans = 0;
    cin>> w>> h;

    for(int i = 0; i < 4; i += 1){
        cin>> n;
        ll l, r;
        for(int j = 0; j < n; j += 1){
            cin>> a;
            if(!j)  l = a;
            else r = a;
        }

        if(i < 2) ans = max(ans, (r - l)*h);
        else ans = max(ans, (r - l)*w);
    }
    
    cout<< ans<< endl;
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