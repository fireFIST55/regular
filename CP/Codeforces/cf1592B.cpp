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
    int n, x;
    cin>> n>> x;
    vector<int>vc(n), ac(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        ac[i] = vc[i];
    }

    sort(vc.begin(), vc.end());
    for(int i = n - x; i < x; i += 1){
        if(vc[i] != ac[i]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}