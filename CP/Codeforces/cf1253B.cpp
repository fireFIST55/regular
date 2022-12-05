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
    bool no = 0;
    int a, n, sum = 0, sz = 0;
    cin>> n;
    vector<int>ans;
    map<int, int>pos, neg;

    for(int i = 0; i < n; i += 1){
        cin>> a;
        sum += a;

        if(!no){
            if(a > 0){
                if(pos[a]) no = 1;
                else pos[a] += 1;
            }
            else{
                if(pos[-a]) neg[-a] += 1;
                else no = 1;
            }

            if(sum) sz += 1;
            else ans.push_back(sz + 1), sz = 0, pos.clear(), neg.clear();
        }
    }

    if(no || sum)  cout<<-1<<endl;
    else{
        cout<<ans.size()<<endl;
        for(int X: ans) cout<<X<<' ';
        cout<<endl;
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