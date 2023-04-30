#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, t, a, b, ans = 0, curr = 0, time = 0; cin >> n >> t >> a >> b;
    vector<int>dif(n), easy(2);
    vector<pair<int, int>>vp;
    for(int &i: dif){
        cin >> i; easy[i] += 1;
    }
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        vp.emplace_back(a, dif[i]);
    }
    sort(vp.begin(), vp.end());
    function<int(int x)>calc = [&](int x){
        int res = min(easy[0], x / a); res = res + min(easy[1], (x - res * a) / b);
        return res;
    };

    ans = calc(max(0, vp[0].first - 1));
    for(int i = 0; i < n && time <= t; i += 1){
        time += (vp[i].second?b: a); curr += (time <= t);
        int j = i + 1; easy[vp[i].second] -= 1;
        while(j < n && time >= vp[j].first && time <= t){
            easy[vp[j].second] -= 1;
            time += (vp[j].second?b: a); j += 1;
            curr += (time <= t);
        }
        j -= 1;
        if(time <= t){
            ans = max(ans, curr + (j == n - 1?calc(max(0, (t - vp[j].first - 1))): calc(max(0, (vp[j + 1].first - vp[j].first - 1)))));
        }
        i = j;
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