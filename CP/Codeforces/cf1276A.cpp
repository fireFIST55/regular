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
    vector<int>ans;
    int n = s.length();
    for(int i = 0; i < n; i += 1){
        if(i + 2 < n){
            if(s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o'){
                if(i + 3 < n && s[i + 3] == 'o')    ans.push_back(i + 1);
                else ans.push_back(i + 2);
                i += 2;
            }
            else if(s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e'){
                ans.push_back(i + 1);
                i += 2;
            }
        }
    }

    cout<<ans.size()<<endl;
    if(ans.size()){
        for(int X: ans) cout<<X + 1<<' ';
        cout<<endl;
    }
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