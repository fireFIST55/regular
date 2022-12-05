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
    int n, k = 0;
    cin>> n;
    vector<int>vc(n), ans(n);
    for(int &X: vc) cin>> X;

    if(n&1){
        int neg = 0, pos = 0, p = 0, nn = 0;
        for(int i = 0; i < 3; i += 1){
            vc[i] > 0?(pos += 1, p += vc[i]): (neg += 1, nn += vc[i]);
        }
        // cout<< p<<" "<< nn<< endl;

        if(pos < 3 && neg < 3){
            for(int i = 0; i < 3; i += 1){
                if(vc[i] > 0) ans[i] = nn;
                else ans[i] = -p;
            }
        }
        else{
            for(int i = 0; i < 3; i += 1){
                if(i) ans[i] = -vc[0];
                else ans[i] = (vc[1] + vc[2]);
            }
        }

        k = 3;
    }

    for(; k + 1< n; k += 2){
        ans[k] = -vc[k + 1];
        ans[k + 1] = vc[k];
    }

    for(int X: ans) cout<< X<< " ";
    cout<< endl;
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