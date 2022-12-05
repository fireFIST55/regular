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
    int a, x;
    cin>> a;
    x = log2(a);
    if(a == (1<<(x + 1)) - 1){
        int ans = 1;
        for(int i = 2; i*i <= a; i += 1){
            if(!(a%i)){
                ans = a/i;
                break;
            }
        }

        cout<< ans<< endl;
    }
    else cout<< ((1<<(x + 1)) - 1)<< endl;
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