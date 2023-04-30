#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll>vc(n);
    ll g = 0, s = 0;
    for(ll &i: vc) cin >> i, g = __gcd(g, i);
    set<ll>ans;
    for(int i = 0; i < k; i += 1, s += g) ans.insert((s % k));
    cout << ans.size() << '\n';
    for(ll i: ans) cout << i << " ";
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}