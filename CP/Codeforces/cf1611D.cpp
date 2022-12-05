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
    int b, n, root;
    cin>> n;
    vector<int>a(n + 1), dis(n + 1, 0), parent(n + 1);
    
    for(int i = 1; i <= n; i += 1)  cin>> parent[i];

    for(int i = 0; i < n; i += 1){
        cin>> b;
        if(!i)  root = b;
        dis[b] = i;
    }

    for(int i = 1; i <= n; i += 1){
        if(dis[parent[i]] > dis[i] || (dis[i] == dis[parent[i]] && i != root)){
            cout<<-1 <<endl;
            return;
        }
    }

    for(int i = 1; i <= n; i += 1)  cout<<dis[i] - dis[parent[i]] <<" ";
    cout<<endl;
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