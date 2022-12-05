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
    int n;
    ll m, mx = LONG_LONG_MIN, mn = LONG_LONG_MAX, ans = 0;
    cin>> n>> m;
    vector<ll>boys(n), girls(m);

    for(int i = 0; i < n; i += 1){
        cin>> boys[i];
        mx = max(mx, boys[i]);
        ans += (boys[i]*(ll)m);
    }

    for(int i = 0; i < m; i += 1){
        cin>> girls[i];
        mn = min(mn, girls[i]);
    }


    if(mx > mn){
        cout<< - 1<<endl;
        return;
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int k = n - 1, cnt = 0;
    for(int i = 0; i < m; i += 1){
        if(binary_search(boys.begin(), boys.end(), girls[i]))   continue;
        ans -= boys[k];
        ans += girls[i];
        cnt += 1;
        if(cnt == m - 1) k -= 1;
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