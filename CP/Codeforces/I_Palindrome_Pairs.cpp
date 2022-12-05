#include<bits/stdc++.h>
#define ll long long
using namespace std;

int fun(string s){
    vector<int>freq(26);
    for(int ch: s) freq[ch - 'a'] += 1;

    int x = 0;
    for(int k = 0; k < 26; k += 1){
        if(freq[k] & 1) x |= (1 << k);
    }
    return x;
}

void solve(){
    int n; cin >> n; string s[n];
    map<int, int>khela;
    for(int i = 0; i < n; i += 1){
        cin >> s[i];
        khela[fun(s[i])] += 1;
    }

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        int x = fun(s[i]), y; khela[x] -= 1;
        ans += (ll)khela[x];
        
        
        for(int k = 0; k < 26; k += 1){
            y = x ^ (1 << k); ans += (ll)khela[y];
        }
    }
    cout << ans << '\n';
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