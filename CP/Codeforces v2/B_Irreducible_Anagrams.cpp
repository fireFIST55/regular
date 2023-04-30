#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.length();
    vector<vector<int>>calc(n, vector<int>(26));
    for(int i = 0; i < n; i += 1){
        calc[i][s[i] - 'a'] = 1;
        if(!i) continue;
        for(int j = 0; j < 26; j += 1){
            calc[i][j] += calc[i - 1][j];
        }
    }
    int q; cin >> q;
    for(int i = 0; i < q; i += 1){
        int l, r, cnt = 0; cin >> l >> r;
        for(int j = 0; j < 26; j += 1){
            cnt += ((calc[r - 1][j] - (l >= 2?calc[l - 2][j]: 0)) > 0);
        }
        if(l == r || cnt >= 3 || s[l - 1] != s[r - 1]) cout << "Yes\n";
        else cout << "No\n";
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