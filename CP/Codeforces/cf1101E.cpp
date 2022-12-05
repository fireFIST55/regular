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
    char ch;
    int n, a, b, mxa = 0, mxb = 0;
    cin>> n;
    set<pair<int, int>>f;

    for(int i = 0; i < n; i += 1){
        cin>> ch>> a>> b;
        if(a < b) swap(a, b);

        if(ch == '+'){
            mxa = max(a, mxa);
            mxb = max(b, mxb);
        }
        else{
            (mxa <= a && mxb <= b)?cout<<"YES\n": cout<<"NO\n";
        }
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