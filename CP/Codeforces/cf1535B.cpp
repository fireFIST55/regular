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
    int a, n, ans = 0;
    cin>> n;
    vector<int>odd, even;
    for(int i = 0; i < n; i += 1){
        cin>> a;
        if(a&1) odd.push_back(a);
        else even.push_back(a);
    }

    int m = max(0, n - (int)even.size() - 1);
    ans = (n*(n - 1)/2 - m*(m + 1)/2);

    for(int i = 0; i < odd.size(); i += 1){
        for(int j = i + 1; j < odd.size(); j += 1){
            if(__gcd(odd[i], odd[j]) > 1)   ans += 1;
        }
    }
    cout<<ans<<endl;
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