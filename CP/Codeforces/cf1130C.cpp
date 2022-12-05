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

map<pair<int, int>, bool>isVisited;
vector<pair<int, int>>coOr1, coOr2;
char s[50][55];

void dfs(int x, int y, int n, int p){
    if(isVisited[{x, y}] || s[x][y] == '1')   return;
    else{
        if(!isVisited[{x, y}])
            p == 1?coOr1.push_back({x, y}): coOr2.push_back({x, y});
        
        isVisited[{x, y}] = 1;
        if(x + 1 < n) dfs(x + 1, y, n, p);
        if(y + 1 < n) dfs(x, y + 1, n, p);
        if(x - 1 > - 1) dfs(x - 1, y, n, p);
        if(y - 1 > - 1) dfs(x, y - 1, n, p);
    }
}

void solve(){
    bool found = 0;
    int n, cost = 0;
    cin>> n;
    int l1, r1, l2, r2;
    cin>> l1>> r1>> l2>> r2;

    for(int i = 0; i < n; i += 1)   cin>> s[i];

    dfs(l1 - 1, r1 - 1, n, 1);
    if(isVisited[{l2 - 1, r2 - 1}]){
        cout<< cost<< endl;
        return;
    }

    dfs(l2 - 1, r2 - 1, n, 2);
    sort(coOr1.begin(), coOr1.end());
    sort(coOr2.begin(), coOr2.end());
    cost = INT_MAX;

    for(int i = 0; i < coOr1.size(); i += 1){
        int a = coOr1[i].first, b = coOr1[i].second, c, d;
        for(int j = 0; j < coOr2.size(); j += 1){
            c = coOr2[j].first, d = coOr2[j].second;
            if((a - c)*(a - c) + (b - d)*(b - d) <= cost) cost = (a - c)*(a - c) + (b - d)*(b - d);
        }
    }

    cout<< cost<< endl;
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