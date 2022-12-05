#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, sub;
    cin >> s;
    int cnt = 0, n = s.length();

    for(char ch: s){
        if(ch == '1') cnt += 1;
        else sub += ch;
    }
    int i = 0;
    while(i < n && sub[i] == '0') i += 1;

    sub.insert(i, string(cnt, '1'));
    cout << sub << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}