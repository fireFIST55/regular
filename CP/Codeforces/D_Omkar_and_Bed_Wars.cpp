#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s; cin >> n >> s;
    int cnt = 0;
    while(s.size() && s[0] == s.back()){
        cnt += 1; s.pop_back();
    }

    if(s.empty()){
        if(cnt <= 2)
            cout << 0 << '\n';
        else if(cnt == 3)
            cout << 1 << '\n';
        else{
            cnt = (cnt + 2) / 3; cout << cnt << '\n';
        }
        return;
    }

    s.push_back('#'); int ans = 0;
    for(int i = 0; i + 1 < s.size(); i += 1){
        cnt += 1;
        if(s[i] != s[i + 1]){
            ans += (cnt / 3); cnt = 0;
        }
    }
    cout << ans << '\n';
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