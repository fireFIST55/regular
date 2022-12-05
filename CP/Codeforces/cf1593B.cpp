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
    string s;
    cin>> s;
    bool f = 0, z = 0;
    int n = s.length(), ans = n, five, zero;

    for(int i = n - 1; i >=0 && (!f || !z); i -= 1){
        if(s[i] == '5' && !f){

            for(int k = i - 1; k>=0; k -= 1){
                if((s[k] == '2' || s[k] == '7')){
                    five = (i - (k + 2)) + 1 + (n - i - 1);
                    ans = min(five, ans);
                    f = 1;
                    break;
                }
            }
        }

        if(s[i] =='0' && !z){
            int index = 0;
            bool sec = 0;

            for(int k = i - 1; k >=0; k -= 1){
                if(sec){
                    if(s[k] != '0'){
                        ans = min(ans, index);
                        z = 1;
                        break;
                    }
                }

                if(s[k] == '5'){
                    zero = (i - (k + 2)) + 1 + (n - i - 1);
                    ans = min(zero, ans);
                    z = 1;
                    break;
                }
                else if(s[k] == '0'){
                    sec = 1;
                    index = (i - (k + 2)) + 1 + (n - 1 - i);
                }
            }
        }
    }
    cout<<ans<<endl;
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