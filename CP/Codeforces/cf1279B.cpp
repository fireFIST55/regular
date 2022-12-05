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
    bool sealed = 0, del = 0;
    int n, mx = 0, mxIndx = 1;
    ll s, tot = 0, ans = 0;
    cin>> n>> s;
    vector<int>vc(n);
    for(int &X: vc) cin>> X;

    for(int i = 0; i < n; i += 1){
        if(!sealed){
            if(tot + (ll)vc[i]> s){
                if(del) sealed = 1;
                else if(mx > vc[i]) del = 1, ans = mxIndx;
                else if(vc[i] >= mx && i < n - 1 && vc[i + 1] <= mx) del = 1, ans = i + 1;
                else if(vc[i] > mx) del = 1, ans = i + 1;
                else sealed = 1;
            }
            else{
                tot += (ll)vc[i];
                if(!del && mx < vc[i])  mx = vc[i], mxIndx = i + 1;
            }
        }
    }

    del?cout<<ans: cout<<0;
    cout<<endl;
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