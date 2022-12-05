#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    ll ans = vc[n - 1] + vc[n - 2];
    
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