#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n; cin>>n;
    ll sum=1;
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(__gcd(i,n)==1){
            ans.push_back(i);
            sum=(sum*i)%n;
        }
    }
    int ok=0;
    if(sum%n==1)ok=1;
    cout<<(ok?ans.size():ans.size()-1)<<'\n';
    for(auto j:ans){
        if(!ok&&j==sum%n) continue;
        cout<<j<<' ';
    }
    cout<<'\n';
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