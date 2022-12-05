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
    int n, k;
    cin>> n>> k;
    vector<int>vc(n);
    for(int &X: vc) cin>> X;

    sort(vc.begin(), vc.end());
    int l = 1, x = k, ans = 0;
    while(x--){
        ans += vc[n - l - k]/vc[n - l];
        l += 1;
    }

    for(int i = 0; i < (n - 2*k); i += 1)   ans += vc[i];
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