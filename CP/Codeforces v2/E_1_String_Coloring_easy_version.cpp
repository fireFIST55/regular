#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    bool yes = 1;
    int n; cin >> n;
    string s; cin >> s;
    vector<int>color(n), fixed(n), dp(n), index(n);
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        vp.emplace_back(s[i] - 'a', i);
    }
    sort(vp.begin(), vp.end());
    int lim = 0;
    for(int i = 0; i < n && yes; i += 1){
        if(i < vp[i].second){
            if(lim > vp[i].second) yes = 0;
            fixed[vp[i].second] = 1;
            dp[vp[i].second] -= 1; dp[i] += 1;
            color[i] = 1; lim = max(lim, vp[i].second);
        }
        else color[i] = 0;
    }
    for(int i = 0; i < n && yes; i += 1){
        if(fixed[i]) continue;
        dp[i] += (i?dp[i - 1]: 0);
        if(i + dp[i] != vp[i].second) yes = 0;
    }
    if(!yes) cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i: color) cout << i << " ";
        cout << '\n';
    }
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