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
    int n;
    string s;
    cin>> n>> s;
    vector<int>vc, skip(n, 0);
    for(int i = 0; s[i]; i += 1){
        if(s[i] == '2') vc.push_back(i), skip[i] = 1;
    }

    if(vc.size() && vc.size()<3){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<string>ans(n, string(n, '='));
    for(int i = 0; i < n; i += 1)   ans[i][i] = 'X';

    for(int i = 0; i < vc.size(); i += 1){
        ans[vc[i]][(vc[(i + 1)%vc.size()])] = '-';
        ans[(vc[(i + 1)%vc.size()])][vc[i]] = '+';
    }

    for(string S: ans)  cout<<S<<endl;
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