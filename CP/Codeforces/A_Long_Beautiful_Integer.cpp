#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    bool yes = 1;
    for(int i = k; i < n && yes; i += 1){
        if(s[i] != s[i % k]){
            if(s[i] > s[i % k]) yes = 0;
            else break;
        }
    }

    if(yes){
        cout << n << '\n';
        for(int i = 0; i < n; i += 1) cout << s[i % k];
        cout << '\n';
        return;
    }
    for(int i = k - 1; i >= 0; i -= 1){
        if(s[i] - 48 < 9){
            s[i] += 1; break;
        }
        else s[i] = '0';
    }
    cout << n << '\n';
    for(int i = 0; i < n; i += 1) cout << s[i % k];
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}