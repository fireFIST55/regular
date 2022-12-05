#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s; 
    int n; cin >> n >> s;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        while(i < n && s[i] == 'S') i += 1;

        int start = i, cnt = 0;
        while(i < n && s[i] == 'G'){
            i += 1; cnt += 1;
        }
        if(cnt) vp.emplace_back(start, cnt);
    }

    if(vp.empty()){
        cout << 0 << '\n';
        return;
    }
    int ans = vp.size() > 1? vp[0].second + 1: vp[0].second;
    for(int i = 1; i < vp.size(); i += 1){
        int f1 = vp[i - 1].first, f2 = vp[i].first, cnt1 = vp[i - 1].second, cnt2 = vp[i].second;
        if(f2 - (f1 + cnt1) == 1){
            if(i + 1 < vp.size() || i - 2 >= 0) ans = max(ans, cnt1 + cnt2 + 1);
            else ans = max(ans, cnt1 + cnt2);
        }
        else ans = max(ans, cnt2 + 1);
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