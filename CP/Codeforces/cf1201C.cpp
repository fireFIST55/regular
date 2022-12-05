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
    ll k;
    int l, n, m;
    cin>> n>> k;
    vector<ll>vc(n);

    for(ll &X: vc) cin>> X;
    sort(vc.begin(), vc.end());

    l = m = n/2;
    ll x, ans = 1;
    while(k){
        for(; l < n && vc[l] == vc[m]; l += 1){}
        if(l < n){
            if((vc[l] - vc[m])*(ll)(l - m) <= k)    x = (vc[l] - vc[m]), vc[m] += x, k -= x*(ll)(l - m);
            else if(min(k, (ll)(l - m)) <= k){
                vc[m] += k/min(k, (ll)(l - m));
                break;
            }
            else break;
            
        }
        else{
            vc[m] += k/min(k, (ll)(l - m));
            break;
        }
    }
    cout<<vc[m]<<endl;
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