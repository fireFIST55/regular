#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(string str){
    for(int i = 1; i < str.length(); i += 1){
        if(abs(str[i] - str[i - 1]) == 1) return 0;
    }
    return 1;
}

void solve(){
    string s, odd, even; cin >> s;
    for(char ch: s){
        if((ch - 'a') % 2) odd += ch;
        else even += ch;
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if(check(odd + even)) cout << (odd + even) << '\n';
    else if(check(even + odd)) cout << (even + odd) << '\n';
    else cout << "No answer\n";
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