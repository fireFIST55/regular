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
    int n, mx = 0, total = 0, ans = 0;
    cin>> n;
    vector<int>vc(n), freq(11), cnt(n + 5);

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        freq[vc[i]] += 1;
        cnt[freq[vc[i]]] += 1;
        cnt[freq[vc[i]] - 1] -= 1;
        mx = max(mx, freq[vc[i]]);
        if(freq[vc[i]] == 1) total += 1;

        if(total == 1 || cnt[1] == i + 1 || cnt[mx]*mx + 1 == i + 1 || cnt[mx - 1]*(mx - 1) + mx == i + 1) ans = i + 1;
    }

    cout<<ans <<endl;
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