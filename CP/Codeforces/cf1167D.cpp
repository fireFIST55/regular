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
    int n, y = -1;
    string s;
    cin>> n>> s;
    deque<int>dq;

    for(int i = 0; i < n; i += 1){
        if(dq.empty())
            dq.push_back(1), cout<<1;
        else{
            if(s[i] == '('){
                if(dq.back() == 1)  dq.push_back(0), cout<<0;
                else dq.push_back(1), cout<< 1;
            }
            else{
                int x = dq.back();
                dq.pop_back();
                cout<< x;
            }
        }
    }
    cout<<endl;
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