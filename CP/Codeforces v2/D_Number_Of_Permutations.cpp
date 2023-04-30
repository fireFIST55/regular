#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 3e5 + 5;
ll MOD = 998244353;
vector<ll>fact(N);

void solve(){
    int n; cin >> n;
    ll ans = fact[n];
    vector<pair<int, int>>vp(n);
    for(int i = 0; i < n; i += 1){
        cin >> vp[i].first >> vp[i].second;
    }
    for(int i = 0; i < 2; i += 1){
        ll x = 1;
        sort(vp.begin(), vp.end());
        for(int k = 0; k < n; k += 1){
            int r = k + 1;
            while(r < n && vp[r].first == vp[r - 1].first) r += 1;
            x = (x * fact[r - k]) % MOD;
            k = r - 1;
        }
        ans = (ans + (MOD - x)) % MOD;
        for(int k = 0; k < n && !i; k += 1) swap(vp[k].first, vp[k].second);
    }
    sort(vp.begin(), vp.end());
    ll d = 1;
    for(int i = 0; i < n; i += 1){
        int r = i + 1;
        while(r < n && vp[r].first == vp[r - 1].first) r += 1;
        map<int, int>freq;
        for(int l = i; l < r; l += 1) freq[vp[l].second] += 1;
        for(pair<int, int> k: freq) d = (d * fact[k.second]) % MOD;
        i = r - 1;
    }
    for(int i = 1; i < n; i += 1){
        if(vp[i].second < vp[i - 1].second) d = 0;
    }
    ans = (ans + d) % MOD;
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    fact[0] = 1;
    for(int i = 1; i < N; i += 1) fact[i] = (fact[i - 1] * (ll) i) % MOD;

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}