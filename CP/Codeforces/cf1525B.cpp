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
    bool lagbe = 0;
    int n, ans;
    cin>> n;
    vector<int> vc(n), vc1(n);
    for(int &X: vc) cin>> X;
    vc1 = vc;
    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        if(vc1[i] != vc[i]) lagbe = 1;
    }

    if(!lagbe){
        cout<<0<<endl;
        return;
    }

    if(vc[0] == vc1[0] || vc[n -1] == vc1[n - 1])   ans = 1;
    else if(vc[0] == vc1[n - 1] && vc[n - 1] == vc1[0])  ans = 3;
    else ans = 2;
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