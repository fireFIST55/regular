#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll u, v, x = 1; cin >> u >> v;
    if(u > v){
        cout << - 1 << '\n';
        return;
    }
    else if(u == v){
        if(u == 0)  cout << 0 << '\n';
        else    cout << 1 << '\n' << u << '\n';
        return;
    }

    v -= u;
    vector<int>vc(60);
    for(ll k = 59; k >= 0; k -= 1){
        if(u & (x << k)) vc[k] = 1;
        if(v >= (x << k)){
            ll m = (v / (x << k));
            if(m > 1) m = (m % (ll)2 == 0?m: m - (ll)1);
            else m = 0;
            vc[k] += m;

            v -= m * (x << k);
        }
    }

    if(v > 0){
        cout << - 1 << '\n';
        return;
    }

    vector<ll>ans;
    for(ll k = 59; k >= 0; k -= 1){
        for(int i = 0; i < vc[k]; i += 1){
            if(i < ans.size()) ans[i] |= (x << k);
            else ans.emplace_back(x << k);
        }
    }
    cout << ans.size() << '\n';
    for(ll i: ans) cout << i << ' ';
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