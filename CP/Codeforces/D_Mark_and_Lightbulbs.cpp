#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    string s, t; cin >> s >> t;
    vector<ll>s_pos, t_pos;
    if(s[0] != t[0] || s[n - 1] != t[n - 1]){
        cout << - 1 << '\n';
        return;
    }
    for(int i = 0; i < n - 1; i += 1){
        if(s[i] != s[i + 1]) s_pos.emplace_back(i);
        if(t[i] != t[i + 1]) t_pos.emplace_back(i);
    }

    ll ans = 0;
    if(s_pos.size() != t_pos.size()){
        cout << - 1 << '\n';
        return;
    }

    for(int i = 0; i < s_pos.size(); i += 1){
        ans += abs(s_pos[i] - t_pos[i]);
    }
    cout << ans << '\n';
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