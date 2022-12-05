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
    bool no = 0;
    int a, n, ans = 0;
    cin>> n;
    vector<int>vc(n);

    for(int i = 0; i < n; i += 1){
        cin>> vc[i];
    }

    sort(vc.begin(), vc.end());
    for(int i = 1; i <= n; i += 1){
        if(i != vc[i - 1]){
            ans += 1;
            int x = vc[i - 1]&1?(vc[i - 1] + 1)/2 - 1:vc[i - 1];
            if(i >x){
                cout<< -1<<endl;
                return;
            }
        }
    }

    cout<< ans<< endl;
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