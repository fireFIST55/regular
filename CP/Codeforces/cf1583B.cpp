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
    int n, m, a, b, c, root;
    cin>> n>> m;
    vector<int>fr(n + 1);
    for(int i = 0; i<m; i += 1){
        cin>> a>> b>> c;
        fr[b] = 1;
    }

    for(int i = 1; i<=n; i += 1){
        if(!fr[i]){
            root = i;
            break;
        }
    }

    for(int i = 1; i <= n; i += 1){
        if(root != i)   cout<<root<<' '<<i<<endl;
    }
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