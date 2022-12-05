#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s, moves; cin >> s;
    int n = s.length();
    vector<int>vis(26), inS(26);
    for(int i = n - 1; i >= 0; i -= 1){
        if(!vis[s[i] - 97]) moves += s[i];
        vis[s[i] - 97] += 1;
    }

    bool yes = 1; int total = 0;
    for(int i = 0; i < moves.length(); i += 1){
        inS[moves[i] - 97] = vis[moves[i] - 97] / (i + 1), total += vis[moves[i] - 97] / (i + 1);
        if(vis[moves[i] - 97] % (i + 1)) yes = 0;
    }
    string root;
    for(int i = 0; i < n && yes; i += 1){
        if(!inS[s[i] - 97]) yes = 0;
        root += s[i]; inS[s[i] - 97] -= 1;
    }
    reverse(moves.begin(), moves.end());

    string curr = root; int l = 0;
    for(int i = root.length() && yes; i < n; i += 1){
        int j = i, k = 0; string str;
        while(j < n && k < curr.length() && yes){
            if(curr[k] == moves[l]) k += 1;
            else if(curr[k] == s[j]){
                str += s[j]; j += 1, k += 1;
            }
            else yes = 0;
        }
        i = j - 1; l += 1; curr = str;
    }
    if(yes) cout << root << " " << moves << '\n';
    else cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}