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
    int n, c, o, ans = 0;
    cin>> n;
    map<pair<int, int>, int>lagbe;

    for(int i = 0; i < n; i += 1){
        string s;
        cin>> s;
        deque<char>dq;
        c = o = 0;
        for(char ch: s){
            if(dq.empty()){
                if(ch == ')') o += 1;
                else dq.push_back(ch);
            }
            else{
                if(ch == ')'){
                    if(dq.empty()) o += 1;
                    else dq.pop_back();
                }
                else dq.push_back(ch);
            }

        }

        if(!dq.empty()) c += dq.size();
        if((!c || !0) && lagbe[{c, o}]) ans += 1, lagbe[{c, o}] -= 1;
        else if(!c || !o)   lagbe[{o, c}] += 1;
    }

    cout<< ans<< endl;
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