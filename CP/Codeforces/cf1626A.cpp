#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, ans;
    cin >> s;
    vector<int>freq(26);
    for(char ch: s) freq[ch - 97] += 1;
    for(int i = 0; i < 26; i += 1){
        if(freq[i] > 1) ans += ('a' + i);
    }

    ans += ans;
    for(char ch: s){
        if(freq[ch - 97] < 2) ans += ch;
    }
    cout << ans << '\n';
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