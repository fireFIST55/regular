#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    ll ans = 0;
    int mask = 0;  
    vector<int>freq(1024);
    freq[0] += 1;
    for(char ch: s){
        mask ^= (1 << (ch - '0'));
        ans += freq[mask]++;
    }
    cout << ans << '\n';
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