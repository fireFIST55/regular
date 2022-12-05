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
    ll n;
    cin>> n;
    vector<ll>vc;
    vc.push_back(1);
    vc.push_back((n*(n + 1))/2);

    for(int i = 2; i*i <= n; i += 1){
        if(!(n%i)){
            vc.push_back(n*(i - 1)/2 + i);
            if(n/i != i) vc.push_back(n*(n/i - 1)/2 + n/i);
        }
    }

    sort(vc.begin(), vc.end());
    for(int i = 0; i < vc.size(); i += 1)   cout<< vc[i]<< " ";
    cout<< endl;
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