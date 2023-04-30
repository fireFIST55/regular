#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<vector<int>>pre(n, vector<int>(26)), suf(n, vector<int>(26));
    for(int i = 0; i < n; i += 1){
        pre[i][s[i] - 'a'] = 1;
        if(!i) continue;
        for(int k = 0; k < 26; k += 1) pre[i][k] += pre[i - 1][k];
    }
    int ans = 0;
    for(int i = 0; i < n; i += 1){
        int curr = 0;
        for(int k = 0; k < 26; k += 1){
            curr += (pre[i][k]?1: 0) + (pre[n - 1][k] - pre[i][k]?1: 0);
        }
        ans = max(ans, curr);
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}