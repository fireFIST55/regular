#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll lim = (ll)1<<32;

void solve(){
    ll ans = 0;
    int n; cin >> n;
    stack<ll>khela; khela.push(1);

    for(int i = 0; i < n; i += 1){
        string s; cin >> s;

        if(s == "for"){
            ll x; cin >> x;
            khela.push(min(khela.top()*x, lim));
        }
        else if(s == "end") khela.pop();
        else ans += khela.top();
    }

    if(ans >= lim) cout << "OVERFLOW!!!";
    else    cout << ans;
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