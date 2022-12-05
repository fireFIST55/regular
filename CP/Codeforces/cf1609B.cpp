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

bool check(string s, int pos, int n){
    if(s[pos] == 'a'){
        if(pos + 2 < n && s[pos + 1] == 'b' && s[pos + 2] == 'c')   return 1;
        else return 0;
    }
    else if(s[pos] == 'b'){
        if(pos - 1 >= 0 && pos + 1 < n && s[pos - 1] == 'a' && s[pos + 1] == 'c')   return 1;
        else return 0;
    }
    else{
        if(pos - 2 >= 0 && s[pos - 1] == 'b' && s[pos - 2] == 'a')  return 1;
        else return 0;
    }
}

int check1(string &s, int n){
    int prev = 0;

    for(int i = 0; i + 2 < n; i += 1){
        if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c'){
            prev += 1;
        }
    }

    return prev;
}

void solve(){
    char ch, ch1;
    string s;
    int n, q, pos, prev;
    cin>> n>> q>> s;

    prev = check1(s, n);
    
    for(int i = 0; i < q; i += 1){
        cin>> pos>> ch;
        bool bef = 0, af = 0;

        if(check(s, pos - 1, n))   bef = 1;
        s[pos - 1] = ch;
        if(check(s, pos - 1, n)) af = 1;

        if((bef && af) || (!bef && !af))   cout<<prev <<endl;
        else if(bef && !af) cout<<(--prev) <<endl;
        else   cout<<(++prev) <<endl;
    }
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