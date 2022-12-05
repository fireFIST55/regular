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
    bool done = 0;
    int n;
    cin>> n;
    string s[n - 2];
    for(int i = 0; i < n - 2; i += 1)
        cin>> s[i];

    for(int i = 0; i < n - 2; i += 1){
        if(done)    cout<<s[i][1];
        else if(!i) cout<<s[i];
        else{
            if(s[i][0] != s[i - 1][1]){
                done = 1;
                cout<< s[i][0];
                i -= 1;
            }
            else cout<<s[i][1];
        }
    }

    if(!done)   cout<<s[n - 3][1];
    cout<< endl;
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