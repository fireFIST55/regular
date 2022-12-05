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
    int a, n, tot = 0, mn = INT_MAX;
    cin>> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        mn = min(mn, vc[i]);
    }

    for(int i = 0; i < n; i += 1){
        if(mn != vc[i]){
            cout<<vc[i] <<" " <<mn <<endl;
            tot += 1;
            if(tot == n/2)  return;
        }
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