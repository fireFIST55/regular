#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    int x, index, mx = 0, n = s.length();
    for(int i = n - 1; i > 0; i -= 1){
        x = (s[i] - 48 + s[i - 1] - 48);
        if(x > mx){
            mx = x;    index = i - 1;
            if(mx > 9) break;
        }
    }

    if(mx < 10) index = 0, mx = (s[0] - 48 + s[1] - 48);
    for(int i = 0; i < n; i += 1){
        if(i == index){
            cout << mx;
            i += 1;
        }
        else cout << s[i];
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