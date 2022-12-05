#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    vector<int>adj[26];

    function<bool(int, int, int need)>dfs = [&](int u, int parent, int need){
        bool khela = 0;
        if(u == need) khela = 1;
        for(int v: adj[u]){
            if(v != parent)
                khela |= dfs(v, u, need);
            
            if(khela) break;
        }

        return khela;
    };

    vector<pair<char, char>>ans;
    for(int i = 0; i < n; i += 1){
        if(s1[i] == s2[i]) continue; 
        if(!dfs(s1[i] - 'a', - 1, s2[i] - 'a')){
            adj[s1[i] - 'a'].push_back(s2[i] - 'a'); adj[s2[i] - 'a'].push_back(s1[i] - 'a');
            ans.emplace_back(s1[i], s2[i]);
        }
    }

    cout << ans.size() << '\n';
    for(pair<char, char>ch: ans) cout << ch.first << ' ' << ch.second << '\n';
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