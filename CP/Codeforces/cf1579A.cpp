#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define endl '\n'

void solve(){
    bool no = 1;
    string a;
    cin>> a;
    map<int, int>mp;

    for(int i = 0; a[i]; i += 1)
        mp[a[i] - 65] += 1;

    if(mp[0] && mp[1] && mp[2]){
        if(mp[0] <= mp[1] && mp[1] - mp[0] == mp[2])    no = 0;
    }
    else{
        if(mp[0] && mp[1] && mp[0] == mp[1])     no = 0;
        else if(mp[1] && mp[2] && mp[1] == mp[2])   no = 0;
    }

    no?cout<<"NO\n": cout<<"YES\n";
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