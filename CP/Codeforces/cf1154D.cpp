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
    bool sealed = 0;
    int n, b, a, x, ans = 0, currB, currA;
    cin>> n>> b>> a;
    currB = b, currA = a;
    for(int i = 0; i < n; i += 1){
        cin>> x;
        if(!sealed){
            if(x){
                if(currA < a){
                    if(currB) currA += 1, currB -= 1, ans += 1;
                    else if(currA) currA -= 1, ans += 1;
                    else sealed = 1;
                }
                else currA -= 1, ans += 1;
            }
            else{
                if(currA > 0)   currA -= 1, ans += 1;
                else if(currB > 0)  currB -= 1, ans += 1;
                else sealed = 1;
            }

            if(!currA && !currB) sealed = 1;
        }
    }

    cout<<ans <<endl;
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