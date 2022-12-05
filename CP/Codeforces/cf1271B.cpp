#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    int n, b = 0, w = 0;
    cin >> n >> s;
    vector<int>ans;
    for(int i = n - 1; i >= 0; i -= 1){
        b += (s[i] == 'B'); w += (s[i] == 'W');
    }

    if(b&1 && w&1)  cout << - 1 << '\n';
    else if(b == n || w == n) cout << 0 << '\n';
    else{
        char ch;

        (!(b&1))?ch = 'B': ch = 'W';
        for(int i = 0; i < n; i += 1){
            if(s[i] == ch){
                char ch1 = (ch == 'B'?'W': 'B');
                if(s[i + 1] == ch) ans.push_back(++i);
                else{
                    i += 1;
                    while(i < n && s[i] == ch1) ans.push_back(i++);
                    ans.push_back(i);
                }
            }
        }

        cout << ans.size() << '\n';
        for(int x: ans) cout << x << ' ';
        cout << '\n';
    }
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