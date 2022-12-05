#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; 
    ll mx; cin >> n >> m >> mx;
    vector<ll>a(n), b(m);
    for(ll &i: a) cin >> i;
    for(ll &i: b) cin >> i;

    int cnt = 0, ans = 0;
    ll sm = 0;
    int i = 0;
    while(i < n && sm + a[i] <= mx){
        sm += a[i++]; cnt += 1;
    }

    int j = 0;
    ans = cnt;
    while(i >= 0 && j < m){
        while(j < m && sm + b[j] <= mx){
            sm += b[j++]; cnt += 1;
        }
        ans = max(ans, cnt);
        if(i > 0) sm -= a[i - 1], cnt -= 1;
        i -= 1;
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