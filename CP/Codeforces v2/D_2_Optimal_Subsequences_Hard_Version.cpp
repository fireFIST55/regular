#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n; cin >> n;
    vector<int>vc(n);
    ordered_set<int>os;
    vector<pair<int, int>>vp;
    vector<pair<pair<int, int>, int>>q;
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; vp.emplace_back( - vc[i], i);
    }
    sort(vp.begin(), vp.end());
    int m; cin >> m;
    vector<int>ans(m);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v;
        q.push_back({{u, v}, i});
    }
    sort(q.begin(), q.end()); int taken = - 1;
    for(int i = 0; i < m; i += 1){
        if(q[i].first.first <= taken + 1) ans[q[i].second] = vc[*os.find_by_order(q[i].first.second - 1)];
        else{
            while(taken + 1 < q[i].first.first){
                os.insert(vp[++taken].second);
            }
            ans[q[i].second] = vc[*os.find_by_order(q[i].first.second - 1)];
        }
    }
    for(int i: ans) cout << i << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}