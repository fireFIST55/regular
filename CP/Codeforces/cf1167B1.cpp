#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ull unsigned long long
#define ll long long

#define MOD 1000000007

#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    vector<int>ans{4, 8, 15, 16, 23, 42}, check(4);

    for(int i = 1; i <= 4; i += 1){
        cout<<"? "<< i <<" "<<i + 1<<endl;
        cout.flush();
        cin>>check[i - 1];
    }

    do{
        bool ok = 1;
        for(int i = 1; i <= 4; i += 1)  ok &= (ans[i]*ans[i - 1] == check[i - 1]);
        if(ok) break;
    }while(next_permutation(ans.begin(), ans.end()));

    cout<<"!";
    for(int X: ans) cout<<" "<<X;
    cout<<endl;
    cout.flush();
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