#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, k, ans;
    cin >> n >> k >> s;
    
    vector<int>cnt(26);
    for(char c: s) cnt[c - 97] += 1;
    int pair = 0, lone = 0;

    for(int i = 0; i < 26; i += 1){
        pair += cnt[i]/2;
        lone += cnt[i]%2;
    }

    ans = 2*(pair/k);
    lone += 2*(pair%k);
    if(lone >= k) ans += 1;
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