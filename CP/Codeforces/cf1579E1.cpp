#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    int n;
    cin>> n;
    vector<int>vc(n);
    deque<int>dq;
    
    for(int &X: vc) cin>> X;

    for(int l = 0, r = n - 1; l<=r; l += 1){
        if(dq.empty()) dq.push_back(vc[l]);
        else if(dq.front()>vc[l])
            dq.push_front(vc[l]);
        else dq.push_back(vc[l]);
    }

    for(int X: dq)  cout<<X<<' ';
    cout<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
    
    return 0;
}