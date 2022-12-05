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

    for(int i = 0; i < k - 3; i += 1)   cout<< 1<< " ";
    n -= (k - 3);
    if(n&1) cout<< 1<< " "<< n/2<< " "<< n/2<< endl;
    else{
        if(!(n%4)) cout<< n/2<< " "<< n/4<<" " << n/4<< endl;
        else cout<< 2<< " "<< n/2 - 1<<" " << n/2 - 1<< endl;
    }
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