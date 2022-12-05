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
    bool no = 0;
    int a, n, k;
    cin>> n>> k;
    vector<int>ans(n), freq(5005);
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        cin>> a;
        freq[a] += 1;
        if(freq[a] > k) no = 1;
        vp.push_back({a, i});
    }

    if(no){
        cout<< "NO\n";
        return;
    }

    cout<<"YES\n";
    int x = 1;
    sort(vp.begin(), vp.end());
    for(int i = 0; i < n; i += 1){
        if(i && vp[i].first == vp[i - 1].first){
            while(vp[i].first == vp[i - 1].first){
                ans[vp[i++].second] = x++;
                if(x > k) x = 1;
            }

            i -= 1;
        }
        else ans[vp[i].second] = x++;

        if(x > k)  x = 1;
    }

    for(int X: ans) cout<< X<< " ";
    cout<< endl;
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