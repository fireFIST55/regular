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
    int a, n;
    cin>> n;
    bitset<10000>bs[5];
    vector<int>vc, oc(5), vis(5);

    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < 5; k += 1){
            cin>> a;
            if(a)   bs[k][i] = 1, oc[k] += 1;

            if(oc[k] >= n/2 && !vis[k]){
                vis[k] = 1;
                vc.push_back(k);
            }
        }
    }

    for(int i = 0; i < vc.size(); i += 1){
        for(int j = i + 1; j < vc.size(); j += 1){
            if((bs[vc[i]] | bs[vc[j]]).count() == n){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
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