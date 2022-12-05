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
    ll x, k;
    cin>> n>> k;
    vector<ll>vc(n);
    for(ll &X: vc)  cin>> X;
    sort(vc.begin(), vc.end());

    ll mid, left = vc[n/2], right = vc[n - 1] + k, moves = 0;
    while(left < right){
        mid = (left + right + 1)/2;

        moves = 0;
        for(int i = n/2; i < n; i += 1){
            if(mid - vc[i] > 0) moves += mid - vc[i];
            if(moves > k) break;
        }

        if(moves > k)   right = mid - 1;
        else left = mid;
    }
    cout<<left<<endl;
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