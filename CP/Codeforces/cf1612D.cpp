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

class diophantine{
public:
    ll a, b, c, xx, yy;
    diophantine(ll a, ll b, ll c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    ll extendedGCD(ll a, ll b, ll &x, ll &y){
        if(!b){
            x = 1;
            y = 0;
            return a;
        }
        ll x1, y1, gcd = extendedGCD(b, a%b, x1, y1);
        
        x = y1;
        y = x1 - y1 * (a / b);
        return gcd;
    }

    void result(){
        ll g = extendedGCD(a, b, xx, yy);
        (c%g)?cout<<"NO\n": cout<<"YES\n";
    }
};

void solve(){
    ll a, b, x, x1, y1;
    cin>> a>> b>> x;
    if(max(a, b) < x){
        cout<<"NO\n";
        return;
    }
    diophantine d(a, b, x);
    
    d.result();
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