#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;

void solve(){
    ll n, p; cin >> n >> p;
    vector<ll>vc(n), dp(p + 5);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    dp[0] = dp[1] = 1;
    for(int i = 2; i <= p; i += 1) dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    for(int i = 1; i <= p; i += 1) dp[i] = (dp[i] + dp[i - 1]) % MOD;

    set<ll>st;
    function<bool(ll a)>khela = [&](ll a){
        bool ok = 1;
        while(a){
            if(st.find(a) != st.end()){
                ok = 0; break;
            }
            if(a & 1) a = a >> 1;
            else if(a % 4) break;
            else a = a >> 2;
        }
        return ok;
    };

    function<ll(ll a)>calc = [&](ll a){
        int len = 0; ll res = 0; 
        while(a){
            a /= 2; len += 1;
        }
        if(len > p) res = 0;
        else res = dp[p - len];
        return res;
    };

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        if(!khela(vc[i])) continue;
        ans = (ans + calc(vc[i])) % MOD; st.insert(vc[i]);
    }
    cout << ans << '\n';
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