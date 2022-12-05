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
    bool ok, ans = 1;
    int a, n;
    cin>> n;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        ok = 0;

        for(int j = i + 2; j >= 2; j -= 1){
            if(a%j){
                ok = 1;
                break;
            }
        }
        ans &= ok;
    }
    ans?cout<<"YES\n": cout<<"NO\n";
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