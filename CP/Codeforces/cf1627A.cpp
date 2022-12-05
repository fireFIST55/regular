#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool b = 0;
    int n, m, r, c, row = 0, col = 0;
    cin >> n >> m >> r >> c;
    string s[n];
    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        if(!b){
            for(char ch: s[i]) b |= (ch == 'B');
        }
    }

    int ans;
    if(!b) ans = - 1;
    else if(s[r - 1][c - 1] =='B') ans = 0;
    else{
        bool b1 = 0, b2 = 0;
        for(int i = 0; i < m; i += 1) b1 |= (s[r - 1][i] == 'B');
        for(int i = 0; i < n; i += 1) b2 |= (s[i][c - 1] == 'B');

        if(b1 || b2) ans = 1;
        else ans = 2;
    }

    cout << ans << "\n";
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