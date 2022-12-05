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
    bool found = 0, all = 1;
    char ch;
    string s;
    int n, index = -1;
    cin>>n >>ch >>s;
    
    for(int i = 1; i <=n; i += 1){
        if(s[i - 1] == ch)
            index = i;
        else all = 0;
    }
    if(all) cout<<0<<endl;
    else{
        (index > n/2)?cout<<1<<endl<<index: cout<<2<<endl<<n - 1<<' '<<n;
        cout<<endl;
    }
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