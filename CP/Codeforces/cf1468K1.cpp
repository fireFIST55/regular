#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    char ch;
    string s;
    cin >> s;
    int x = 0, y = 0, n = s.length();
    vector< pair < int , int > > dp;

    for(int i = 0; s[i]; i += 1){
        ch = s[i];
        x += ((ch == 'R')?1: (ch == 'L')?-1: 0);
        y += ((ch == 'D')?-1: (ch == 'U')?1: 0);
        dp.push_back({x, y});
    }

    int index = - 1, k, x1, y1;
    x = y = 0;
    for(int i = 0; s[i]; i += 1){
        int j = i;
        while(j < n && s[i] == s[j]) j += 1;

        if(i) x = dp[i - 1].first, y = dp[i - 1].second;

        for(; j < n; j += 1){
            ch = s[j];
            x1 = x + ((ch == 'R')?1: (ch == 'L')?-1: 0);
            y1 = (y + ((ch == 'D')?-1: (ch == 'U')?1: 0));
            if(x1 != dp[i].first || y1 != dp[i].second) x = x1, y = y1;
        }

        if(!x && !y && (dp[i].first || dp[i].second)){
            index = i;
            break;
        }
    }

    if(index == -1) cout << 0 << " " <<  0;
    else cout << dp[index].first << " " << dp[index].second;
    cout << '\n';
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