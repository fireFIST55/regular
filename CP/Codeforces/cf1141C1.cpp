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
    int a, n;
    ll sum = 0, minVal = 0;
    cin>> n;
    vector<ll>vc(n - 1), ans(n), freq(n + 1);
    for(int i = 0; i < n - 1; i += 1){
        cin>> vc[i];
        sum += vc[i];
        minVal = min(sum, minVal);
    }

    bool no = 0;
    sum = ans[0] = 1 - minVal;
    if(ans[0] <= 0 || ans[0] > n)   no = 1;
    freq[ans[0]] = 1;
    for(int i = 1; i < n && !no; i += 1){
        sum = ans[i] = vc[i - 1] + sum;
        if(ans[i] > 0 && ans[i] <= n && !freq[ans[i]])   freq[ans[i]] = 1;
        else no = 1;
    }

    if(no){
        cout<< -1 <<endl;
        return;
    }
    for(int X: ans) cout<< X<<" ";
    cout<<endl;
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