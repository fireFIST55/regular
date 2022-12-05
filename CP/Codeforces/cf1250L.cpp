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

int fun(int a, int b, int c){
    int gr1, gr2, gr3;
    int x;
    gr1 = c;
    gr2 = a/2;
    gr3 = a - gr2;

    if(gr2 < gr1)   x = min(b, (gr1 - gr2)), gr2 += x, b -= x;
    if(gr3 < gr1)   x = min(b, (gr1 - gr3)), gr3 += x, b -= x;

    if(gr1 < gr2)   x = min(b, (gr2 - gr1)), gr1 += x, b -= x; 

    if(b){
        x = b/3;
        gr1 += x;
        gr2 += x;
        gr3 += x;

        if(b%3) gr1 += 1;
    }

    return max(gr1, max(gr2, gr3));
}

void solve(){
    int a, b, c, ans;
    cin>> a>> b>> c;
    if(a >= c)   ans = fun(a, b, c);
    else if(c > a)  ans = fun(c, b, a);
    cout<<ans<<endl;
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