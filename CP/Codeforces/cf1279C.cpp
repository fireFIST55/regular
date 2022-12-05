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
    int a, n, m;
    cin>> n>> m;
    vector<int>pos(n + 1);

    for(int i = 0; i < n; i += 1){
        cin>> a;
        pos[a] = i;
    }

    int b, range = -1;
    ll total = 0;
    for(int i = 0; i < m; i += 1){
        cin>> a;
        b = pos[a];
        if(b < range)   total += (ll)1;
        else{
            total += (ll)(2*(b - i) + 1);
            range = b;
        }
    }

    cout<<total<<endl;
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