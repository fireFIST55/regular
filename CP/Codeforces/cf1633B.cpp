#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int one = 0, zero = 0, n = s.length();
    for(char ch: s){
        one += (ch == '1'); zero += (ch == '0');
    }

    if(s.length()&1) cout << min(one, zero);
    else{
        if(one == zero){
            int x = s[0] == '1'?min(one-1, zero): min(zero - 1, one);
            int y = s[0] == '1'?min(one-1, zero): min(zero - 1, one);
            cout << max(x, y);
        }
        else cout << min(one, zero);
    }

    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}