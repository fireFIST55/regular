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
    int a, n, ans = 0;
    cin>> n;
    set<int>st;
    for(int i = 1; i <= n; i += 1)  st.insert(i);
    vector<int>left;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        if(st.find(a) != st.end()) st.erase(a);
        else left.push_back(a);
    }

    sort(left.begin(), left.end(), greater<int>());
    for(int i = 0; i < left.size(); i += 1){
        auto it = st.end();
        it --;
        if(*it > (left[i] - 1)/2){
            cout<< -1 << endl;
            return;
        }

        st.erase(it);
    }

    cout<< left.size() <<endl;
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