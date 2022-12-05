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
int n, k;
vector<vector<int>>vis(27, vector<int>(27, 0));
vector<int>path;

void dfs(int v){
    for(int i = k; i > 0; i -= 1){
        if(vis[v][i]) continue;
        else{
            // cout<<"Baba jibon ki dhukse?\n";
            vis[v][i] = 1;
            path.push_back(i);
            dfs(i);
        }
    }
}

void solve(){
    cin>> n>> k;
    string ans, s;
    s += 'a';
    for(int i = 1; i < k; i += 1){
        s += 'a' + i;
        s += 'a' + i;
    }

    for(int i = 1; i <= k; i += 1){
        for(int j = i; j <= i + 1 && j <= k; j += 1)  vis[i][j] = 1;
    }
    dfs(k);

    for(int i = 0; i < path.size(); i += 1) s += 'a' + path[i] - 1;

    ans += 'a';
    while(ans.size() < n) ans += s;

    ans = ans.substr(0, n);
    cout<< ans<< endl;
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