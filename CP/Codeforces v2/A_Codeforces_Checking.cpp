#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s = "codeforces";
    char ch; cin >> ch;
    for(int i = 0; i < s.length(); i += 1){
        if(s[i] == ch){
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