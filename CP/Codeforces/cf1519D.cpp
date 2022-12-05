#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    int n;
    cin>> n;
    ll ans = 0;
    vector<ll>a(n), b(n), mul(n);
    vector<vector<ll>>dp(n, vector<ll>(n, 0));

    for(ll &X: a)  cin>> X;
    for(int i = 0; i<n; i += 1){
        cin>> b[i];
        if(i)   mul[i] += mul[i - 1] + a[i]*b[i];
        else mul[i] = a[i]*b[i];
    }
    ans = mul[n - 1];

    for(int c = 0; c<n; c += 1){
        ll x = a[c] * b[c];

        for(int l = c - 1, r = c + 1; l >=0 && r < n; l -= 1, r += 1){
            x += a[l] * b[r];
            x += a[r] * b[l];

            ans = max(ans, x + mul[n - 1] - ( l?mul[r] - mul[l - 1]:mul[r] ));
        }

        x = 0;
        for(int l = c, r = c + 1; l >=0 && r < n; l -= 1, r += 1){
            x += a[l] * b[r];
            x += a[r] * b[l];

            ans = max(ans, x + mul[n - 1] - ( l?mul[r] - mul[l - 1]:mul[r] ));
        }

    }
    cout<<ans<<endl;
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