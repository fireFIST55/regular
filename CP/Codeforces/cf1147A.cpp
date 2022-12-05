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
    int a, n, k, ans;
    cin>> n>> k;
    ans = 2*(n - 1) + n;
    map<pair<int, int>, int>mp;
    vector<int>vc(k), freq(100005);

    for(int i = 0; i < k; i += 1){
        cin>> vc[i];
        freq[vc[i]] += 1;
        if(freq[vc[i]] == 1)    ans -= 1;
    }

    for(int i = 0; i < k; i += 1){
        if(freq[vc[i] + 1] && !mp[{vc[i], vc[i] + 1}]){
            ans -= 1;
            mp[{vc[i], vc[i] + 1}] = 1;
        }

        if(freq[vc[i] - 1] && !mp[{vc[i], vc[i] - 1}]){
            ans -= 1;
            mp[{vc[i], vc[i] - 1}] = 1;
        }

        freq[vc[i]] -= 1;
    }

    cout<< ans <<endl;
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