#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; cin >> s;
    int n; cin >> n;
    string t[n];

    for(int i = 0; i < n; i += 1)
        cin >> t[i];
    
    int ans = 0;
    vector<pair<int, int>>khela;
    for(int i = 0; i < s.length(); ){
        int mx = 0, L, R; ans += 1;
        for(int j = 0; j < n; j += 1){
            int k = t[j].length();
            if(mx > k) continue;

            for(int l = 0, r = k - 1; (i + r < s.length() || i - l >= 0) && mx < r + 1; r -= 1, l += 1){
                if(i + r >= s.length() || i - l < 0) continue;
                if(s.substr(i - l, k) == t[j]){
                    if(mx < r + 1){
                        mx = r + 1; L = j + 1, R = i - l + 1;
                    }
                    break;
                }
            }
        }

        if(!mx){
            cout << - 1 << '\n';
            return;
        }
        khela.emplace_back(L, R);
        i += mx;
    }
    cout << ans << '\n';
    for(pair<int, int>pi: khela) cout << pi.first << " " << pi.second << '\n';
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