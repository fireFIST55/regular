#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll ans;
    ll n, m, k, x, s; cin >> n >> m >> k >> x >> s; ans = n * x;
    vector<ll>time(m), instnt(k), dp(m);
    vector<pair<ll, ll>>manat, manains;
    for(ll &i: time) cin >> i;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        manat.emplace_back(a, time[i]);
    }
    sort(manat.begin(), manat.end());
    for(int i = 0; i < m; i += 1) dp[i] = i?min(dp[i - 1], manat[i].second): manat[i].second;

    for(ll &i: instnt) cin >> i;
    for(int i = 0; i < m; i += 1){
        ll a; cin >> a;
        if(a <= s){
            ll curr = 0;
            if(instnt[i] >= n){
                cout << 0 << '\n';
                return;
            }
            if(s - a){
                int index = lower_bound(manat.begin(), manat.end(), make_pair(s - a, 0)) - manat.begin();
                if(index > m - 1 || manat[index].first) index -= 1;
                if(index >= 0){
                    curr = (n - instnt[i]) * dp[index]; ans = min(ans, curr);
                }
            }
            ans = min(ans, (n - instnt[i])*x);
        }
    }
    for(int i = 0; i < m; i += 1){
        if(manat[i].first <= s) ans = min(ans, manat[i].second * n);
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