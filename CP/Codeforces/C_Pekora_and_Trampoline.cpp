#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll>vc(n), times(n);
    for(ll &i: vc) cin >> i;

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        if(times[i] + 1 < vc[i]){
            ans += vc[i] - 1 - times[i]; 
            times[i] += vc[i] - 1 - times[i];
        }

        if(i + 1 < n) times[i + 1] += (1 + times[i] - vc[i]);
        for(int k = i + 2; k < min(n, vc[i] + i + 1); k += 1) times[k] += 1;
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