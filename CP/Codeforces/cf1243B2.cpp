#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s, t; cin >> n >> s >> t;
    vector< pair<int, int> > ans;
    vector<int>freq(26);

    for(int i = 0; i < n; i += 1){
        freq[s[i] - 'a'] += 1; freq[t[i] - 'a'] += 1;
    }

    for(int i = 0; i < 26; i += 1){
        if(freq[i]&1){
            cout << "No\n";
            return;
        }
    }

    for(int i = 0; i < n; i += 1){
        if(s[i] == t[i]) continue;
        bool kul = 0;

        for(int j = i + 1; j < n; j += 1){
            if(s[i] == s[j]){
                ans.emplace_back(j + 1, i + 1);
                swap(s[j], t[i]);
                kul = 1; break;
            }
        }

        if(!kul){
            for(int j = i + 1; j < n; j += 1){
                if(t[j] == s[i]){
                    ans.emplace_back(j + 1, j + 1);
                    swap(s[j], t[j]);
                    ans.emplace_back(j + 1, i + 1);
                    swap(s[j], t[i]);
                    kul = 1; break;
                }
            }
        }
    }

    cout << "Yes\n" << ans.size() << '\n';
    for(pair<int, int>pi: ans) cout << pi.first << ' ' << pi.second << '\n'; 
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