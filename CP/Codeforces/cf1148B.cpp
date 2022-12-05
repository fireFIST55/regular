#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k;
    ll ta, tb; cin >> n >> m >> ta >> tb >> k;
    vector<ll>a(n), b(m);
    for(ll &i: a) cin >> i;
    for(ll &i: b) cin >> i;

    ll ans = 0;
    for(int i = 0; i <= k; i += 1){
        if(i == n){
            cout << - 1 << '\n';
            return;
        }

        auto start = lower_bound(b.begin(), b.end(), a[i] + ta);
        int s = start - b.begin();
        if(start == b.end() || s + (k - i) >= m){
            cout << - 1 << '\n';
            return;
        }
        
        ans = max(ans, b[s + (k - i)] + tb);
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