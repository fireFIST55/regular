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
    ull n, m, k, mn;
    cin>> n>> m>> k;
    if(m < n - 1){
        cout<<"NO\n";
        return;
    }

    ull x = (n*(n - 1))/2;
    if(m > x){
        cout<<"NO\n";
        return;
    }
    if(n == 1){
        k > 1?cout<<"YES\n": cout<<"NO\n";
        return;
    }
    m == x?mn = 1: mn = 2;
    k > 3?cout<<"YES\n": k > 2&&mn==1?cout<<"YES\n": cout<<"NO\n";
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