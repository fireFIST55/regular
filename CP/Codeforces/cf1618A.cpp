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
    vector<ll>vc(7), ans(3);
    for(ll &X: vc) cin>> X;
    ans[0] = vc[0];
    ans[1] = vc[1];

    for(int i = 2; i < 7; i += 1){
        ans[2] = vc[i];
        vector<ll>temp;

        for(int j = 1; j < (1<<3); j += 1){
            ll sum = 0;
            for(int k = 0; k < 3; k += 1){
                if(j & (1<<k)) sum += ans[k];
            }

            temp.push_back(sum);
        }

        bool no = 0;
        sort(temp.begin(), temp.end());
        for(int i = 0; i < 7; i += 1){
            if(temp[i] != vc[i]) no = 1;
        }

        if(!no){
            for(ll X: ans)  cout<< X<< " ";
            cout<< endl;
            return; 
        }
    }
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