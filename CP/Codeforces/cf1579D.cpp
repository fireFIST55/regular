#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

typedef pair<int, int>pi;

void solve(){
    int n;
    cin>>n;
    
    auto cmp = [](pi const &x, pi const &y){
        return x > y;
    };

    set<pi, decltype(cmp)>a(cmp);
    int b;
    vector<pi>ans;
    
    for(int i = 1; i<=n; i += 1){
        cin>> b;
        if(b > 0)   a.emplace(b, i);
    }

    while(a.size() > 1){
        auto p1 = *a.begin();
        a.erase(a.begin());

        auto p2 = *a.begin();
        a.erase(a.begin());

        ans.emplace_back(p1.second, p2.second);
        if(p1.first > 1)    a.emplace(p1.first - 1, p1.second);
        if(p2.first > 1)    a.emplace(p2.first - 1, p2.second);
    }
    cout<<ans.size()<<endl;
    for(auto p: ans)    cout<<p.first<<" "<<p.second<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}