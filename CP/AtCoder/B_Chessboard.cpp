#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s[8];
    for(int i = 0; i < 8; i += 1) cin >> s[i];
    for(int i = 0; i < 8; i += 1){
        for(int j = 0; j < 8; j += 1){
            if(s[i][j] == '*'){
                char ch = 'a' + j; cout << ch << 8 - i << '\n';
                return;
            }
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}