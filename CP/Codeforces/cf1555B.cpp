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
    bool no = 1;
    int w, h, x1, x2, y1, y2, a, b, ans = INT_MAX;
    cin>> w>> h>> x1>> y1>> x2>> y2>> a>> b;
    if((x2 - x1) + a <= w){
        no = 0;
        ans = min(ans, max(0, (a - x1)));
        ans = min(ans, max(x2 + a - w, 0));
    }

    if((y2 - y1) + b <=h){
        no = 0;
        ans = min(ans, max(y2 + b - h, 0));
        ans = min(ans, max(0, b - y1));
    }
    double f;
    if(!no) f = ans;
    no?cout<<-1: cout<<f;
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