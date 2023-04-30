#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    ll curr = 1, a = 0, b = 0;
    bool odd = 1;
    int m = s.length();
    for(int i = m - 1; i >= 0; i -= 1){
        int x = (s[i] - '0');
        if(x & 1){
            if(odd) a = ((ll)((x + 1) / 2)) * curr + a, b = ((ll)(x / 2)) * curr + b;
            else a = ((ll)(x / 2)) * curr + a, b = ((ll)((x + 1) / 2)) * curr + b;
            odd = !odd;
        }
        else a = ((ll)(x / 2)) * curr + a, b = ((ll)(x / 2)) * curr + b;
        curr = curr * (ll)10;
    }
    cout << a << " " << b << '\n';
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