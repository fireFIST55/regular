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

vector<vector<int>>adj(100005, vector<int>());
vector<bool>isRespected(100005);
vector<int>ans;


void dfs(int artc){
    bool curr = true;
    for(int j: adj[artc]){
        curr &= isRespected[j];
        dfs(j);
    }

    if(curr && isRespected[artc]) ans.emplace_back(artc);
}

void solve(){
    int n, p, c, root;
    cin>> n;
    for(int i = 0; i < n; i += 1){
        cin>> p>> c;
        if(p != -1){
            adj[p].emplace_back(i + 1);
        }
        else root = i + 1;
        isRespected[i + 1] = c;
    }

    for(int vrtc: adj[root])    dfs(vrtc);
    sort(ans.begin(), ans.end());
    if(!ans.size()){
        cout<< - 1<<endl;
        return;
    }

    for(int X: ans) cout<< X<<" ";
    cout<<endl;
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