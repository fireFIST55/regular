#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool khela = 0;
    string s; cin >> s;
    int n = s.length();
    vector<int>ans(n);

    int i = 0;
    for(; i < n; i += 1){
        while(i < n && s[i] != 'a') i += 1;
        if(i < n){
            while(i < n && s[i] == 'a') i += 1;
            ans[i - 1] = 1;
            
            while(i < n && s[i] == 'b') i += 1;
            break;
        }
    }

    for(; i < n; i += 1){
        ans[i - 1] = 1;
        while(i < n && s[i] == 'a') i += 1;
        ans[i - 1] = 1;

        while(i < n && s[i] == 'b') i += 1;
        i -= 1;
    }

    for(int i: ans) cout << i << ' ';
    cout << '\n';
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