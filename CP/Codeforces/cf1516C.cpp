#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define endl '\n'

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    int n, sm = 0, index = 0;
    cin>> n;
    vector<int>vc(n);
    for(int i = 0; i<n; i += 1){
        cin>> vc[i];
        sm += vc[i];
        if(vc[i]&1) index = i + 1;
    }

    if(sm&1){
        cout<<0<<endl;
        return;
    }

    int mn = 32;
    vector<bool>knapsack(sm + 1, false);
    knapsack[0] = 1;
    for(int i = 0; i<n; i += 1){
        for(int j = sm; j >= vc[i]; j --){
            knapsack[j] = knapsack[j]|knapsack[j - vc[i]];
        }
    }

    if(knapsack[sm/2]){
        if(index){
            cout<<1<<endl<<index<<endl;
            return;
        }
        for(int i = 0; i<n; i += 1){
            for(int j = 0; j<32; j += 1){
                if((vc[i]&(1<<j))){
                    if(mn > j){
                        mn = j;
                        index = i + 1;
                        break;
                    }
                }
            }
        }
        cout<<1<<endl<<index<<endl;
    }
    else    cout<<0<<endl;
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