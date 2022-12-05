#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<int>freq(26);
    int n; cin >> n;
    for(int i = 0; i < 2*n + 1; i += 1){
        string t; cin >> t;
        for(char ch: t) freq[ch - 'a'] += 1;
    }

    for(int i = 0; i < 26; i += 1){
        if(freq[i] & 1){
            char ch = 'a' + i; cout << ch << '\n';
            return;
        }
    }
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