#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 1e9 + 7;

void solve(){
    int x; cin >> x;
    string s; cin >> s;
    
    ll ans = s.length();
    for(int i = 0; i < x; i += 1){
        int r = s[i] - '1';
        if(s.length() < x){
            int n = (int)s.length() - i;
            string ss = s.substr(i + 1, n);
            for(int k = 0; k < r; k += 1) s += ss;
        }

        ans = (ans + r * (ans - (ll)i - (ll)1)) % MOD;
    }
    cout << (ans + MOD) % MOD<< '\n';
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