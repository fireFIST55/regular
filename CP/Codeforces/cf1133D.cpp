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
    int n, ans = 0, extra = 0;
    cin>> n;
    map<pair<int, int>, int>mp;
    vector<int> a(n), b(n);
    for(int &X: a)   cin>> X;
    for(int i = 0; i < n; i += 1){
        cin>> b[i];
        if(a[i] == b[i] && !a[i]) extra += 1;
        else{
            if(!a[i]) continue;
            else{
                int c = __gcd(a[i], b[i]);
                b[i] /= c;
                a[i] /= c;
                ans = max(++mp[{-b[i], a[i]}], ans);
            }
        }
    }

    cout<<ans + extra <<endl;
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