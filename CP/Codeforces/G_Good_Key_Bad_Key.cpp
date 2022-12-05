#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll kprice;
    int n; cin >> n >> kprice;
    vector<ll>chest(n);
    for(ll &i: chest) cin >> i;
    
    ll ans = LONG_LONG_MIN, sum = 0;
    for(int i = - 1; i < n; i += 1){
        ll curr = sum;
        for(int j = i + 1; j < min(n, i + 32); j += 1){
            int x = chest[j]; 
            x >>= (j - i); curr += (ll)x;
        }

        ans = max(ans, curr);
        if(i + 1 != n) sum += chest[i + 1] - kprice;
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