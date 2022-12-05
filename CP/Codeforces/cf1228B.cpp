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

ll bigMOD(ll a, ll b){
    if(!b)  return 1;
    ll x = bigMOD(a, b/2)%MOD;
    x = (x*x)%MOD;
    if(b&1) x = (x * a)%MOD;
    return x;
}

void solve(){
    int h, w;
    cin>> h>> w;
    vector<int>r(h), c(w);
    vector<vector<int>>mp(h, vector<int>(w, 0));
    
    for(int i = 0; i < h; i += 1){
        cin>> r[i];
        for(int k = 0; k < r[i] && k < w; k += 1)   mp[i][k] = 1;
    }

    for(int i = 0; i < w; i += 1){
        cin>> c[i];
        for(int k = 0; k < c[i] && k < h; k += 1)   mp[k][i] = 1;
    }

    int cnt, k, spare = 0;
    for(int i = 0; i < w; i += 1){
        k = cnt = 0;
        while(k < h && mp[k++][i] == 1) cnt += 1;

        if(cnt != c[i]){
            cout<<0<<endl;
            return;
        }
    }

    for(int i = 0; i < h; i += 1){
        k = cnt = 0;
        while(k < w && mp[i][k++] == 1) cnt += 1;

        if(cnt != r[i]){
            cout<<0<<endl;
            return;
        }

        if(i)   while(k < w)    spare += (mp[i][k++] == 0 && (c[k - 1]?c[k - 1] + 2: 1)<=i + 1);
    }

    ll ans = bigMOD(2, spare);
    
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