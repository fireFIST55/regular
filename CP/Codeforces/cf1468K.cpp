#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    char ch;
    string s;
    cin >> s;
    int x = 0, y = 0;
    vector< pair < int, int > > dp;
    for(int i = 0; s[i]; i += 1){
        ch = s[i];
        x += ((ch == 'R')?1: (ch == 'L')?-1: 0);
        y += ((ch == 'D')?-1: (ch == 'U')?1: 0);
        dp.push_back({x, y});
    }

    if(abs(x) &&  abs(y))
        cout << 0 << " " << 0;
    else{
        int cnt = 0, index = -1;
        char ch;
        if(x){
            ch = (x < 0)?'L': 'R';
            x = abs(x);
            for(int i = s.length() - 1; i >= 0; i -= 1){
                if(s[i] == ch) cnt +=  1;
                else cnt = 0;

                if(cnt == x){
                    if(dp[i].first || dp[i].second){
                        index = i;
                        cout << dp[i].first << " " << dp[i].second;
                        break;
                    }
                    else cnt -= 1;
                }
            }
        }
        else{
            ch = (y < 0)?'D': 'U';
            y = abs(y);
            for(int i = s.length() - 1; i >= 0; i -= 1){
                if(s[i] == ch) cnt +=  1;
                else cnt = 0;

                if(cnt == y){
                    if(dp[i].first || dp[i].second){
                        index = i;
                        cout << dp[i].first << " " << dp[i].second;
                        break;
                    }
                    else cnt -= 1;
                }
            }
        }

        if(index == - 1) cout << 0 << " " << 0;
    }

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