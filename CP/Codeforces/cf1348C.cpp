#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, k; cin >> n >> k >> s;
    sort(s.begin(), s.end());
    if(s[0] != s[k - 1]){
        cout << s[k - 1] << '\n';
        return;
    }

    cout << s[0];
    if(k < n && s[k] == s[n - 1]){
        for(int i = 0; i < (n - 1)/k; i += 1) cout << s[k];
        cout << '\n';
    }
    else{
        for(int i = k; i < n; i += 1) cout << s[i];
        cout << '\n';
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