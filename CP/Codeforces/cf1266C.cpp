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
    int r, c;
    cin>> r>> c;
    if(r == 1 && c== 1){
        cout<<0<<endl;
        return;
    }
    else if(r == 1 || c == 1){
        for(int i = 2; i <= ((r==1)?c: r) + 1; i += 1)  cout<<i<<endl;
        return;
    }

    for(int i = 1; i <= r; i += 1){
        for(int j = 1; j <= c; j += 1)  cout<<i*(r + j)<<' ';
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