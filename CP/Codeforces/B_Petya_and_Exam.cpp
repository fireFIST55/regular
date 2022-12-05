#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int q;
    string gd, patt; cin >> gd >> patt >> q;
    vector<int>good(26);
    for(char ch: gd) good[ch - 'a'] = 1;

    function<bool(string pattern, string t)> matt = [&](string pattern, string t){
        if(pattern.size() != t.size()) return 0;
        for(int i = 0; i < pattern.size(); i += 1){
            if(pattern[i] == '?'){
                if(!good[t[i] - 'a']) return 0;
            }
            else if(pattern[i] != t[i]) return 0;
        }
        return 1;
    };
     
    auto index = patt.find('*');
    for(int i = 0; i < q; i += 1){
        bool yes = 1;
        string s; cin >> s;
        if(index == string:: npos) yes &= matt(patt, s);
        else if(s.size() < patt.size() - 1) yes = 0;
        else{
            string str1 = patt.substr(0, index), str2 = s.substr(0, index);
            yes &= matt(str1, str2);
            reverse(patt.begin(), patt.end());
            reverse(s.begin(), s.end());
            index = patt.size() - index - 1;
            yes &= matt(patt.substr(0, index), s.substr(0, index));
            reverse(patt.begin(), patt.end());
            reverse(s.begin(), s.end());

            index = patt.size() - index - 1;
            for(int k = index; k < s.size() - (patt.size() - index - 1); k += 1){
                yes &= (!good[s[k] - 'a']);
            }
        }

        yes?cout << "YES\n": cout << "NO\n";
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