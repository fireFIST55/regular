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
    int n, m, k, ans;
    cin>> n>> m>> k;
    vector<int>vc(n), segment;

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        if(i)   segment.push_back(vc[i] - vc[i - 1] - 1);
    }

    ans = vc[n - 1] - vc[0] + 1;
    sort(segment.begin(), segment.end(), greater<int>());
    for(int i = 0; i < k - 1; i += 1)   ans -= segment[i];

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