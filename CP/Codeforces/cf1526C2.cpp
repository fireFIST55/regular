#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    int n, ans = 0;
    ll a,  sm = 0;
    cin>> n;
    priority_queue<ll>pq;

    for(int i = 0; i<n; i += 1){
        cin>> a;
        sm += a;
        if(a<0) pq.push(-a);
        ans += 1;

        if(sm<0){
            while(!pq.empty() && sm<0){
                sm += pq.top();
                ans -= 1;
                pq.pop();
            }
        }
    }

    cout<<ans<<endl;
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