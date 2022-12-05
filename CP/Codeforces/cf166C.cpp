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
    bool nai = 1;
    int a, n, x, extra = 0, ans = INT_MAX;
    cin>> n>> x;
    vector<int>vc;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        vc.push_back(a);
        if(a == x)  nai = 0;
    }

    if(nai) vc.push_back(x), extra = 1;
    sort(vc.begin(), vc.end());

    n = vc.size();
    for(int i = 0; i < n; i += 1){
        if(vc[i] == x){
            if(i + 1 <= (n + 1)/2)  ans = min(ans, max(abs(i + 1 - (n + 1)/2)*2 + (n&1?-1: 0), 0) + extra);
            else ans = min(ans, max(abs(i + 1 - (n + 1)/2)*2 + (!(n&1)?-1: 0), 0) + extra);
        }
    }

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