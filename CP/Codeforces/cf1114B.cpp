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
    int a, n, m, k;
    ll ans = 0;
    cin>> n>> m>> k;
    vector<pair<int, int>>vc;
    for(int i = 0;i < n; i += 1){
        cin>> a;
        vc.push_back({a, i + 1});
    }

    vector<int>indices(m*k), ansIn;
    sort(vc.begin(), vc.end(), greater<pair<int, int>>());
    for(int i = 0; i < m*k; i += 1) ans += (ll)vc[i].first, indices[i] = vc[i].second;
    sort(indices.begin(), indices.end());

    for(int i = m - 1, l = 0; l < k - 1; i += m, l += 1)   ansIn.push_back(indices[i]);
    cout<< ans<< endl;
    for(int X: ansIn)   cout<< X<<" ";
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