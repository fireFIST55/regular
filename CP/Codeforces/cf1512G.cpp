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
    int n;
    cin>> n;
    map<int, int>ans;
    vector<int>sum(n + 1);
    for(int i = 1; i<=n; i += 1){
        for(int j = i; j<=n; j += i)    sum[j] += i;
        if(ans[sum[i]]) ans[sum[i]] = min(ans[sum[i]], i);
        else ans[sum[i]] = i;
    }

    for(int i = 1; i<=n; i += 1){
        cout<<i<<' ';
        ans[i]?cout<<ans[i]: cout<<-1;
        cout<<endl;
    }
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