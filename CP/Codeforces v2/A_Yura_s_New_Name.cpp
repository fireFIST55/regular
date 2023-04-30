#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.length(), ans = 0;
    if(n == 1){
        if(s[0] == '^'){
            cout << 1 << '\n';
            return;
        }
    }
    for(int i = 0; i < n; i += 1){
        if(s[i] == '^') continue;
        int j = i;
        while(j < n && s[j] == '_') j += 1, ans += 1;
        if(j < n) ans -= 1;
        if(!i) ans += 1; 
        i = j;
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