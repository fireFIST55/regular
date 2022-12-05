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
    ll ans = 0;
    int n;
    cin>> n;
    vector<int>vc(n);
    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
        vc[i] = abs(vc[i]);
    }

    sort(vc.begin(), vc.end());

    for(int i = 0; i < n; i += 1){
        int left = i, right = n - 1, mid, last;

        while(left <= right){
            mid = (left + right)>>1;
            if(vc[mid] > vc[i]*2)   right = mid - 1;
            else last = mid, left = mid + 1;
        }

        ans += (ll)(last - i);
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