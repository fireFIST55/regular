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
    int n;
    cin>> n;
    string l, r;
    cin>> l>> r;
    deque<int>quesL, quesR;
    vector<vector<int>>left(26, vector<int>()), right(26, vector<int>());
    
    for(int i = 0; l[i]; i += 1)
        l[i] != '?'?left[l[i] - 97].push_back(i + 1): quesL.push_back(i + 1);
    
    for(int i = 0; r[i]; i += 1)
        r[i] != '?'?right[r[i] - 97].push_back(i + 1): quesR.push_back(i + 1);

    vector<pair<int, int>>ans;
    for(int i = 0; i < 26; i += 1){
        for(int k = 0; k < min(left[i].size(), right[i].size()); k += 1)    ans.push_back({left[i][k], right[i][k]});

        if(!quesR.empty()){
            for(int k = min(left[i].size(), right[i].size()); k < left[i].size() && !quesR.empty(); k += 1){
                ans.push_back({left[i][k], quesR.back()});
                quesR.pop_back();
            }
        }

        if(!quesL.empty()){
            for(int k = min(left[i].size(), right[i].size()); k < right[i].size() && !quesL.empty(); k += 1){
                ans.push_back({quesL.back(), right[i][k]});
                quesL.pop_back();
            }
        }
    }

    if(!quesR.empty() && !quesL.empty()){
        while(!quesR.empty() && !quesL.empty()){
            ans.push_back({quesL.front(), quesR.front()});
            quesL.pop_front();
            quesR.pop_front();
        }
    }

    cout<<ans.size() <<endl;
    for(pair<int, int>pi: ans)  cout<<pi.first <<" " <<pi.second <<endl;
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