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

int fn(string s, int l, int r, char ch){
    bool no = 0;
    int cnt = 0;

    while(l<r && !no){
        if(s[l] != s[r]){
            if(s[l] != ch && s[r] != ch) no = 1;
            else{
                s[l]==ch?l += 1: r -= 1;
                cnt += 1;
            }
        }
        else l += 1, r -= 1;
    }
    int send;

    no?send = -1: send = cnt;
    return send;
}

void solve(){
    bool no = 0;
    int n, ans = 0;
    string s;
    cin>> n>> s;
    for(int i = 0, j = n - 1; i<j; i += 1, j -= 1){
        if(s[i] != s[j]){
            int l = i, r = j, cnt = 0;
            int temp1 = fn(s, i, j, s[i]), temp2 = fn(s, i, j, s[j]);
            // cout<<i<<" "<<temp1<<" "<<temp2<<endl;
            if(temp1 == temp2 && temp1 == -1){
                no = 1;
                break;
            }
            else{
                cnt = INT_MAX;
                cnt = temp1 != -1?temp1: cnt;
                cnt = temp2 != - 1?min(cnt, temp2): cnt;
                ans = ((!ans)?cnt: min(ans, cnt));
            }
            break;
        }
    }

    no?cout<<-1: cout<<ans;
    cout<<endl;
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