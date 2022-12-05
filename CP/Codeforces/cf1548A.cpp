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
    int n, m, q;
    cin>> n>> m;
    vector<int>greater(n + 1), dead(n + 1);
    int ans = n, x, a, b;

    for(int i = 0; i < m; i += 1){
        cin>> a>> b;

        if(a < b)   swap(a, b);
        greater[b] += 1;
        if(!dead[b])    ans -= 1;
        dead[b] = 1;
    }

    cin>> q;
    while(q--){
        cin>> x;
        switch(x){
            case 1: cin>> a>> b;
                    if(a < b)   swap(a, b);
                    greater[b] += 1;
                    if(!dead[b])    ans -= 1;
                    dead[b] = 1;
                    break;
            case 2: cin>> a>> b;
                    if(a < b)   swap(a, b);
                    greater[b] -= 1;
                    if(!greater[b] && dead[b])    ans += 1, dead[b] = 0;
                    break;
            default: cout<<ans<<endl;
                     break;
        }
    }
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