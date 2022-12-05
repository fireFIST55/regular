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
    int n, m, u, v;
    cin>> n>> m;
    vector<int>ans, vc[n + 1];
    
    for(int i = 0; i < m; i += 1){
        cin>> u>> v;
        vc[u].push_back(v);
        vc[v].push_back(u);
    }

    vector<bool>isVisited(n + 1);
    int artc, total = n;
    priority_queue<int>pq;
    pq.push(-1);
    isVisited[1] = 1;
    while(!pq.empty()){
        total -= 1;
        artc = -pq.top();
        pq.pop();
        ans.push_back(artc);

        if(!total) break;

        for(int vrtc: vc[artc]){
            if(!isVisited[vrtc]){
                pq.push(-vrtc);
                isVisited[vrtc] = 1;
            }
        }
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