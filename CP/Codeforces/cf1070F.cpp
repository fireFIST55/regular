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
    int n, sz, ans = 0, total = 0, al = 0, bb = 0;
    cin>> n;
    priority_queue<int>alice, bob, both, none;

    for(int i = 0; i < n; i += 1){
        string s;
        int a;
        cin>> s>> a;

        if(s[0] == '1' && s[1] == '1')  both.push(a);
        else if(s[0] == '1' && s[1] == '0') alice.push(a);
        else if(s[0] == '0' && s[1] == '1') bob.push(a);
        else none.push(a);
    }

    while(!both.empty()){
        ans += both.top();
        both.pop();
        al += 1, bb += 1;
        total += 1;
    }

    while(!alice.empty() && !bob.empty()){
        ans += alice.top() + bob.top();
        alice.pop();
        bob.pop();
        al += 1, bb += 1;
        total += 2;
    }

    while((!alice.empty() || !bob.empty() || !none.empty())){
        int x = alice.empty()?0: alice.top(), y = bob.empty()?0: bob.top(), z = none.empty()?0: none.top();
        if(x >= max(y, z) && (al + 1)*2 >= total + 1 && (bb)*2 >= total + 1){
            al += 1;
            total += 1;
            ans += x;
            alice.pop();
        }
        else if(y >= z && (al)*2 >= total + 1 && (bb + 1)*2 >= total + 1){
            bb += 1;
            total += 1;
            ans += y;
            bob.pop();
        }
        else if(al*2 >= total + 1 && bb*2 >= total + 1){
            total += 1;
            ans += z;
            none.pop();
        }
        else break;
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