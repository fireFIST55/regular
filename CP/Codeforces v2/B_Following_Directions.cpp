#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int x = 0, y = 0;
    string s; cin >> s;
    for(int i = 0; i < s.length(); i += 1){
        if(s[i] == 'U') y += 1;
        else if(s[i] == 'D') y -= 1;
        else if(s[i] == 'R') x += 1;
        else x -= 1;
        if(x == 1 && y == 1){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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