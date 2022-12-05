#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll const MOD = 1e9 + 7;

void solve(){
    string s; cin >> s;
    int n = s.length();

    ll base = 1, prev = 0, ans = 0;
    for(ll i = n - 1; i >= 0; i -= 1){
        ll k = (((i * (1 + i)) / (ll)2 * base) % MOD + prev) % MOD;
        prev = (prev + (n - i) * base) % MOD; base = (10 * base) % MOD;
        ans = (ans + (s[i] - 48) * k) % MOD;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}