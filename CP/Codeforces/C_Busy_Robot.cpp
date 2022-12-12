#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    bool idle = 1;
    int start = 0, end = 0, starttime = 0, busy, ans = 0;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int inst, x; cin >> inst >> x;
        vp.emplace_back(inst, x);
    }

    function<bool(int start, int end, int des)> calc = [&](int start, int end, int des){
        bool yes = 0;
        if(start <= end && des >= start && des <= end) yes = 1;
        else if(start > end && des <= start && des >= end) yes = 1;
        return yes;
    };

    int bg;
    for(int i = 0; i < n; i += 1){
        if(idle){
            bg = vp[i].first + (vp[i].second - start);
            if(i + 1 < n && bg <= vp[i + 1].first || i + 1 == n){
                start = vp[i].second, ans += 1;
                if(i + 1 < n && bg == vp[i + 1].first) i += 1;
            }
            else idle = 0, end = vp[i].second;
        }
        else{
            if(i + 1 < n && bg <= vp[i + 1].first){
                ans += calc(start, end, vp[i].second); start = end; idle = 1;
                if(i + 1 < n && bg == vp[i + 1].second) i += 1;
            }
        }
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