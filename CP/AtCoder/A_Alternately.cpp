#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 1; i < n; i += 1){
        if(s[i] == s[i - 1]) yes = 0;
    }
    cout << (yes?"Yes\n": "No\n");
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