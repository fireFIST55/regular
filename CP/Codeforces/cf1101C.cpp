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
    int n, u, v;
    cin>> n;
    vector<int>ans(n), Ymax(n), Xmin(n);
    vector<pair<pair<int, int>, int>>vp;

    for(int i = 0; i < n; i += 1){
        cin>> u>> v;
        vp.push_back({{u, v}, i});
    }

    bool no = 1;
    sort(vp.begin(), vp.end());

    for(int i = 0; i < n; i += 1){
        if(!i)  Ymax[i] = vp[i].first.second;
        else Ymax[i] = max(Ymax[i - 1], vp[i].first.second);
        
        if(n - i - 1 == n - 1)  Xmin[n - i - 1] = vp[n - i - 1].first.first;
        else Xmin[n - i - 1] = min(vp[n - i - 1].first.first, Xmin[n - i]);
    }

    ans[vp[n - 1].second] = 2;
    for(int i = n - 2; i >= 0; i -= 1){
        if(!no) ans[vp[i].second] = 1;
        else if(Ymax[i] < Xmin[i + 1]){
            no = 0;
            ans[vp[i].second] = 1;
        }
        else ans[vp[i].second] = 2;
    }

    if(no){
        cout<< -1<< endl;
        return;
    }
    for(int X: ans) cout<< X<<" ";
    cout<< endl;
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