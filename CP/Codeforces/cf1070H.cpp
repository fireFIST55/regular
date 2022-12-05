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
    cin>> n;
    vector<string>vs(n);
    map<string, pair<int, int>>ans;

    for(int k = 0; k < n; k += 1){
        string s;
        cin>> vs[k];
        s = vs[k];

        for(int i = 1; i <= s.length(); i += 1){
            set<string>st;

            for(int j = 0; j < s.length() - i + 1; j += 1){
                string sub = s.substr(j, i);
                if(st.find(sub) == st.end()){
                    st.insert(sub);
                    ans[sub] = {ans[sub].first + 1, k};
                }
            }
        }
    }

    int q;
    cin>> q;
    while(q--){
        string s;
        cin>> s;
        cout<< ans[s].first<< " ";
        if(ans[s].first) cout<< vs[ans[s].second] <<endl;
        else cout<< "-"<< endl;
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