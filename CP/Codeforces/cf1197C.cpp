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
    int n, k, ans = 0;
    cin>> n>> k;
    vector<int>vc(n), nw;
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        if(i)   nw.push_back(vc[i - 1] - vc[i]);
    }

    ans = vc[n - 1] - vc[0];
    sort(nw.begin(), nw.end());
    for(int i = 0; i < k - 1; i += 1)   ans += nw[i];

    cout<<ans <<endl;
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