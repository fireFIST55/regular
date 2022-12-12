#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>left, right;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i += 1){
        int u, v; cin >> u >> v; vp.emplace_back(u, v);
        left.emplace_back(u); right.emplace_back(v);
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int ans = n - 1;
    for(pair<int, int>pi: vp){
        int bef = lower_bound(right.begin(), right.end(), pi.first) - right.begin();
        int aft = max(0, n - (int)(upper_bound(left.begin(), left.end(), pi.second) - left.begin()));
        ans = min(ans, bef + aft);
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