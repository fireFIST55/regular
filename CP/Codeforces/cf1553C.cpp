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
    int n = s.length(), one = (n&1)?n/2 + 1: n/2, two = n/2, t1 = 0, te1 = 0, t2 = 0, te2 = 0, ans = n;
    for(int i = 0; i < n; i += 1){
        if(i&1){
            s[i] == '?'?te2 += 1: s[i] == '1'?t2 += 1: 1;
            two -= 1;
            if((te2 + t2 > t1 + one) || (te1 + t1 > t2 + two)){
                ans = i + 1;
                break;
            }
        }
        else{
            s[i] == '?'?te1 += 1: s[i] == '1'?t1 += 1: 1;
            one -= 1;
            if((te2 + t2 > t1 + one) || (te1 + t1 > t2 + two)){
                ans = i + 1;
                break;
            }
        }
    }

    cout<<ans<<endl;
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