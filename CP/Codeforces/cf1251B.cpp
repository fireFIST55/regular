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
    string s;
    int odd = 0, evenBad = 0, one;
    for(int i = 0; i < n; i += 1){
        cin>> s;
        
        if(s.length()&1)    odd += 1;
        else{
            one = 0;
            for(int j = 0; s[j]; j += 1)    one += (s[j] == '1');
            if(one&1)   evenBad += 1;
        }
    }
    if(odd || !(evenBad&1)) cout<<n<<endl;
    else cout<<n-1<<endl;
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