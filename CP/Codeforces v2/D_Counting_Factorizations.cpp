#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 998244353;
const int MX = 2025;
vector<ll>fact(MX), invFact(MX);

ll bigPOW(ll n, ll b){
    if(!b) return 1;
    ll x = bigPOW(n, b / 2);
    x = (x * x) % MOD;
    if(b & 1) x = (x * b) % MOD;
    return x;
}

ll ncr(int n, int r){
    
}

bool isPrime(int n){
    for(int i = 2; i * i <= n; i += 2){
        if(!(n % i)) return 0;
    }
    return 1;
}

void solve(){
    int n; cin >> n;
    vector<int>vc(n << 1);
    for(int i = 0; i < (n << 1); i += 1) cin >> vc[i];
    sort(vc.begin(), vc.end());
    vector<pair<int, int>>vp;
    for(int i = 0; i < (n << 1); i += 1){
        if(vp.empty() || vp.back().first != vc[i]) vp.emplace_back(vc[i], 1);
        else vp.back().second += 1;
    }
    fact[0] = 1;
    for(int i = 1; i < MX; i += 1) fact[i] = (fact[i] * i) % MOD;
    for(int i = 0; i < MX; i += 1) invFact[i] = bigPOW(fact[i], MOD - 2);
    for(pair<int, int>p: vp){
        if(isPrime(p.first)) 
    }
    ll ans = 
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}