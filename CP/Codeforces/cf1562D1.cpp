#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

void solve(){
    string s;
    int n, q;
    cin>> n>> q;
    vector<int>vs(n);

    cin>>s;

    for(int i = 0; i<n; i += 1){
        int x = (s[i] == '+'?1: - 1);
        !(i&1)?x = x: x *= (-1);

        if(i)   vs[i] = vs[i - 1];

        if(x == 1)  vs[i] += 1;
    }
    

    for(int i = 0; i<q; i += 1){
        int l, r, nm;
        cin>> l>> r;
        nm = r - l + 1;

        if(nm&1)    cout<<1<<endl;
        else{
            int ps = (( l - 2 >= 0)?-vs[l - 2] + vs[r - 1]: vs[r - 1]);
            int ng = nm - ps;
            ng == ps?cout<<0: cout<<2;
            cout<<endl; 
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>> t;

    while(t--)
        solve();
    
    return 0;
}