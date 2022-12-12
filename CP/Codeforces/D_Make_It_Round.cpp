#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m; cin >> n >> m;
    vector<int>fact(6);

    ll a = n;
    while(!(a % 2) && a >= 0){
        a /= 2; fact[2] += 1;
    }
    while(!(a % 5)){
        a /= 5; fact[5] += 1;
    }
    ll ml = 1;
    while(fact[5] < fact[2] && ml * 5 <= m){
        fact[5] += 1; ml *= (ll)5;
    }
    while(fact[2] < fact[5] && ml * 2 <= m){
        fact[2] += 1; ml *= (ll)2;
    }

    while(ml * (ll)10 <= m) ml *= (ll)10;
    ll ans = n * ml * (m / ml); cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}