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
    int n, par, res;
    cin>> n;
    vector<int>parent(n + 1), size(n + 1), ans;
    for(int i = 0; i < n; i += 1){
        cin>> par>> res;
        if(par != -1){
            parent[par] += (res == 1);
            size[par] += 1;
        }

        parent[i + 1] += (res == 1);
        size[i + 1] += 1;
    }

    for(int i = 1; i <= n; i += 1){
        if(size[i] == parent[i])    ans.push_back(i);
    }

    if(!ans.size()){
        cout<< -1 <<endl;
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