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

bool check(string s){
    deque<char>dq;
    for(int i = 0; s[i]; i += 1){
        if(s[i] == '(') dq.push_back(s[i]);
        else{
            if(dq.empty()) return false;
            dq.pop_back();
        }
    }

    if(!dq.empty()) return false;
    return true;
}

void solve(){
    int n, one = 0, zero;
    string s, ans1, ans2;
    cin>> n>> s;
    
    for(char ch: s){
        one += (ch == '1');
        zero += (ch == '0');
    }

    if(s[0] != '1' || s[n - 1] != '1'){
        cout<<"NO\n";
        return;
    }
    
    int curr = 0, res = 0, l = 1;
    for(int i = 0; i < n; i += 1){
        if(s[i] == '1'){
            if(curr < one/2) ans1 += '(', ans2 += '(', curr += 1, res += 1;
            else ans1 += ')', ans2 += ')';
        }
        else{
            if(l&1) ans1 += '(', ans2 += ')';
            else ans1 += ')', ans2 += '(';

            l += 1;
        }
    }

    if(check(ans1) && check(ans2))
        cout<<"YES\n" <<ans1<< endl<< ans2<< endl;
    else cout<<"NO\n";
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