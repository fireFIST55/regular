#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    ll n = s.length(), cnt = 0, mx = 0; s += s;
    for(int i = 0; i < 2 * n; i += 1){
        if(s[i] == '1') cnt += 1;
        else cnt = 0;
        mx = max(mx, cnt);
    }
    if(mx > n) cout << n * n << '\n';
    else{
        ll x = (mx + 1) / (ll)2, y = (mx + 2) / (ll)2;
        cout << x * y << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}