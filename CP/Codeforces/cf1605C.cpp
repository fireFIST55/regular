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

void fun(int &a, int &b, int &c, char ch){
    ch == 'a'?a += 1: ch == 'b'? b += 1: c += 1;
}

void solve(){
    bool got = 0;
    int n, ans = INT_MAX;
    string s;
    cin>> n>> s;
    int a, b, c;
    
    for(int i = 0; i < n; i += 1){
        a = b = c = 0;
        for(int k = 0; k < min(ans, 7) && i + k < n; k += 1){
            fun(a, b, c, s[i + k]);

            if(k && a > b && a > c) ans = min(ans, k + 1), got = 1;
        }

        if(ans == 2){
            cout<<ans<<endl;
            return;
        }
    }
    got?cout<<ans: cout<<-1;
    cout<<endl;
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