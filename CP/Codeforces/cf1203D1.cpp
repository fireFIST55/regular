#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, t; cin >> s >> t;
    vector<int>pos[26];
    for(int i = 0; s[i]; i += 1){
        pos[s[i] - 'a'].push_back(i);
    }

    int last = 0, ans = 0, n = t.length();
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < pos[t[i] - 'a'].size(); j += 1){
            bool valid = 1;
            int curr = pos[t[i] - 'a'][j] + 1, currmx = last - pos[t[i] - 'a'][j] - 1;

            for(int k = i + 1; k < n; k += 1){
                auto it = lower_bound(pos[t[i] - 'a'].begin(), pos[t[i] - 'a'].end(), curr);
                if(it != pos[t[i] - 'a'].end()){
                    currmx = max(currmx, *it - curr - 1); curr = *it + 1;
                }
                else{
                    valid = 0;
                    break;
                }
            }

            if(valid) ans = max(ans, max(n - curr, currmx));
        }

        last = pos[s[i] - 'a'][0];
    }

    cout << ans << '\n';
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