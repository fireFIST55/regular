#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;
const int N = 2e5 + 5;
vector<ll>fact(N);

void khela(){
    fact[0] = 1;
    for(int i = 1; i < N; i += 1) fact[i] = (i * fact[i - 1]) % MOD;
}

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b / 2) % MOD;
    x = (x * x) % MOD;

    if(b & 1) x = (x * a) % MOD;
    return x;
}

ll ncr(int n, int r){
    if(n < r) return 0;
    ll total = ((fact[n] * bigMOD(fact[r], MOD - 2)) % MOD * bigMOD(fact[n - r], MOD - 2)) % MOD;
    return total;
}

void solve(){
    ll ans = 0;
    int n, m, k; cin >> n >> m >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    for(int i = 0; i < n; i += 1){
        int index = upper_bound(vc.begin(), vc.end(), vc[i] + k) - vc.begin();
        if(index == n || vc[index] > vc[i] + k) index -= 1;
        if(index - i + 1 < m) continue;

        int option = index - i;
        ans = (ans + ncr(option, m - 1)) % MOD;
    }
    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    khela();

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}