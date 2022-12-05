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
    ull n, m, k, dealtw = 0, r, oper = 0;
    cin>> n>> m>> k;
    vector<ull>vc(m);
    
    for(ull &X: vc) cin>> X;

    int i = 0;
    while(i < m){
        r = ((vc[i] - dealtw - 1)/k + 1)*k + dealtw;
        
        while(i < m && vc[i] <= r){
            i += 1;
            dealtw += 1;
        }

        oper += 1;
    }

    cout<<oper <<endl;
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