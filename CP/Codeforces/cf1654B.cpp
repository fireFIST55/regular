#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    vector<int>khela(26);

    int n = s.length();
    for(int i = 0; i < n; i += 1) khela[s[i] - 97] += 1;

    string ans;
    for(int i = 0; i < n; i += 1){
        khela[s[i] - 97] -= 1;
        if(!khela[s[i] - 97]){
            ans = s.substr(i, n - i); break;
        }
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