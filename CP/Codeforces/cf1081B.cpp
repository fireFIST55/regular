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
    cin>> n;
    vector<int>ans(n);
    vector<pair<int, int>>vp;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        vp.push_back({n - a, i});
    }

    sort(vp.begin(), vp.end());
    map<int, int>freq;

    int curr = 1;
    bool on;
    deque<int>dq;
    for(int i = 0; i < n; i += 1)
        dq.push_back(vp[i].second);
    
    for(int i = 0; i < n; i += 1){
        on = 0;
        int left = vp[i].first - freq[ans[vp[i].second]];
        if(left) on = 1;

        while(!dq.empty() && left){
            ans[dq.front()] = curr;
            freq[curr] += 1;
            left -= 1;
            dq.pop_front();
        }

        if(left){
            cout<<"Impossible\n";
            return;
        }
        if(on)  curr += 1;
    }

    cout<< "Possible\n";
    for(int X: ans) cout<< X <<" ";
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