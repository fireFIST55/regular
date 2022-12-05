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
    int n, ans = 0;
    string s, sub = "RGB";
    cin>> n>> s;

    for(int i = 1; i < n; i += 1){
        if(s[i] == s[i - 1]){
            ans += 1;
            
            for(int k = 0; k < 3; k +=1){
                if(i + 1 < n){
                    if(s[i] != sub[k] && s[i + 1] != sub[k]){
                        s[i] = sub[k];
                        i += 1;
                        break;
                    }
                }
                else if(s[i] != sub[k]){
                    s[i] = sub[k];
                    break;
                }
            }
        }
    }

    cout<< ans<< endl<< s<< endl;
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