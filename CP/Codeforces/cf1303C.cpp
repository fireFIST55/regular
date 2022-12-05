#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s; cin >> s;
    n = s.length();

    string layout(1, s[0]);
    int curr = 0;
    vector<int>used(26, 0); used[s[0] - 'a'] = 1;

    for(int i = 1; i < n; i += 1){
        if(used[s[i] - 97]){
            if(curr && layout[curr - 1] == s[i]) curr -= 1;
            else if(curr + 1 < layout.length() && layout[curr + 1] == s[i]) curr += 1;
            else{
                cout << "NO\n";
                return;
            }
        }
        else{
            if(!curr) layout += s[i];
            else if(curr == layout.length() - 1){
                layout += s[i]; curr += 1;
            }
            else{
                cout << "NO\n";
                return;
            }
        }

        used[s[i] - 'a'] = 1;
    }

    for(int i = 0; i < 26; i += 1){
        if(!used[i]) layout += s[i];
    }

    cout << "YES\n" << layout << '\n';
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