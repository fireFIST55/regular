#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int w, m, n = s.length(); cin >> w >> m;
    vector<int>prefix(n), freq[9];
    for(int i = 0; i < n; i += 1) prefix[i] += (i?prefix[i - 1]: 0) + (s[i] - '0');
    for(int i = 0; i + w - 1 < n; i += 1) freq[(prefix[i + w - 1] - (i?prefix[i - 1]: 0)) % 9].emplace_back(i);
    for(int i = 0; i < m; i += 1){
        bool ok = 0;
        int l, r, k, L, R; cin >> l >> r >> k;
        int y = (prefix[r - 1] - (l - 1?prefix[l - 2]: 0)) % 9;
        for(int j = 0; j < 9; j += 1){
            if(freq[j].empty() || !y) continue;
            int x = (k - j + 9) % 9;
            if(x % y) continue;
            int z = x / y;
            if((z == j && freq[z].size() > 1) || (z != j && freq[z].size())){
                ok = 1; L = freq[j][0], R = freq[z].back();
                break;
            }
        }
        if(ok) cout << L + 1 << " " << R + 1 << '\n';
        else cout << - 1 << " " << - 1 << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}