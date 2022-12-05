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
    int n;
    cin>> n;
    vector<int>vc(n);
    for(int &X: vc) cin>> X;
    if(vc[0] != n && vc[n - 1] != n){
        cout<<-1<<endl;
        return;
    }

    for(int i = n - 1; i >= 0; i -= 1){
        if(vc[i] == n)  continue;
        cout<<vc[i]<<" ";
    }
    cout<<n<<endl;
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