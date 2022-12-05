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
    int n, ans = 1, a, b, l = 0, r = 0, mx = 1;
    cin>> n;
    for(int i = 0; i < n; i += 1){
        cin>> a>> b;
        if(a != l || b != r){
            if(mx <= a && mx <= b && a && b) ans += min(a - mx + 1, b - mx + 1);
        }
        mx = max(1, max(a, b));
        if(mx == a && mx == b) mx += 1;
        l = a, r = b;
    }

    cout<< ans<< endl;
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