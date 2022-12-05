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
    int n, m, x, y;
    cin>> n>> m;
    vector<pair<int, int>>vp;
    for(int i = 0; i < m; i += 1){
        cin>> x>> y;
        vp.push_back({x, y});
    }

    for(int i = 0; i < 2; i += 1){
        int x, cnt = 0, mx = 0;
        i?x = vp[0].second: x = vp[0].first;
        vector<int>xx(n + 1);

        for(pair<int, int>pi: vp){
            if(pi.first != x && pi.second != x){
                xx[pi.first] += 1;
                xx[pi.second] += 1;
                mx = max(mx, max(xx[pi.first], xx[pi.second]));
                cnt += 1;
            }
        }

        if(mx == cnt){
            cout<<"YES\n";
            return;
        }
    }

    cout<<"NO\n";
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