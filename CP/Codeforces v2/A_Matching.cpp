#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    ll ans = 1, k = 9;
    if(s[0] == '0'){
        cout << 0 << '\n';
        return;
    }
    for(int i = 0; s[i]; i += 1){
        if(s[i] != '?'){
            if(s[i] != '0') k = 10;
            continue;
        }
        ans *= k;
        k = 10;
    }
    cout << ans << '\n';
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