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
    string s;
    cin>> n>> s;
    for(int i = 0; i< n; i += 1){
        if(s[i] == '0'){
            if(i >= n/2){
                cout<<1<<' '<<i + 1<<' '<<1<<' '<<i<<endl;
                return;
            }
            else{
                cout<<i + 2<<' '<<n<<' '<<i + 1<<' '<<n<<endl;
                return;
            }
        }
    }
    
    cout<<1<<' '<<n - 1<<' '<<2<<' '<<n<<endl;
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