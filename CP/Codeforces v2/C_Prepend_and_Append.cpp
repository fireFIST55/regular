#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0; cin >> n;
    string s; cin >> s;
    ans = (n & 1)?1: 0;
    if(n == 1){
        cout << 1 << '\n';
        return;
    }
    else{
        int l = (n / 2) - 1, r = (n & 1)?(n / 2) + 1: (n / 2);
        for(; l >= 0 && r < n; l -= 1, r += 1){
            if(s[l] == s[r]) ans = (r - l + 1);
        } 
        cout << ans << '\n';
    }
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