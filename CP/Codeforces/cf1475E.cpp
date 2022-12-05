#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

vector<ll>fact(1005);
void fun(){
    fact[0] = fact[1] = 1;

    for(int i = 2; i <= 1000; i += 1){
        fact[i] = (fact[i - 1]*(ll)i)%MOD;
    }
}

ll bigPOW(int a, int b){
    if(!b)  return 1;
    
    ll x = bigPOW(a, b/2)%MOD;
    x = (x*x)%MOD;

    b&1?x = (x*a)%MOD:1;
    return x;
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>vc(n), freq(n + 1);
    for(int &X: vc) cin >> X, freq[X] += 1;

    sort(vc.begin(), vc.end(), greater<int>());
    if(k == n){
        cout << 1 << '\n';
        return;
    }

    int cnt = 1;
    for(int i = 1; i < k; i += 1){
        if(vc[i] == vc[i - 1]) cnt += 1;
        else cnt = 1;
    }

    int tot = freq[vc[k - 1]];
    // cout << cnt << tot << endl;
    ll res = (fact[tot - cnt] * fact[cnt]) % MOD;
    // cout << res << endl;
    res = ((ll) fact[tot] * bigPOW(res, MOD - 2)) % MOD;
    cout << res << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    fun();

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}