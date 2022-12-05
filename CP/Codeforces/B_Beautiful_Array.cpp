#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k, b, s; cin >> n >> k >> b >> s;
    vector<ll>ans(n);
    ll sm = 0, y = s;
    for(int i = 0; i < n; i += 1){
        ll x = b * k + max((ll)0, min(k - 1, s - b * k)); s = max((ll)0, s - x);
        b = 0; ans[i] = x; sm += ans[i];
    }

    if(sm != y || b) cout << - 1 << '\n';
    else{
        for(ll i: ans) cout << i << ' ';
        cout << '\n';
    }
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