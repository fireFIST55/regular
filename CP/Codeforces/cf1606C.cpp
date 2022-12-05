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
    int left, n, cnt;
    ull ans = 0;
    cin>> n>> left;
    vector<ull>vc(n);
    left += 1;

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        vc[i] = ( pow((ull)10, vc[i]) + .000001);
    }

    for(int i = 0; i < n; i += 1){
        cnt = left;
        if(i + 1 < n)   cnt = min(vc[i + 1]/vc[i] - 1, (ull)cnt);
        ans += vc[i] * (ull)cnt;
        
        left -= cnt;
    }
    cout<<ans<<endl;
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