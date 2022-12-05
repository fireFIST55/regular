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
    int n, a, base = 0;
    cin>> n;
    vector<int>vc(30);
    for(int i = 0; i < n; i += 1){
        cin>> a;

        for(int j = 0; j < 30; j += 1){
            if(a&(1<<j))    vc[j] += 1;
            if(i == n - 1) base = __gcd(base, vc[j]);
        }
    }

    set<int>ans;
    for(int i = 1; i*i <= base; i += 1){
        if(!(base%i)){
            ans.insert(i);
            ans.insert(base/i);
        }
    }

    if(!base)
        for(int i = 1; i<=n; i += 1) cout<<i<<' ';
    else    for(int X: ans) cout<<X<<' ';
    cout<<endl;
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