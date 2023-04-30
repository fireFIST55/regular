#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 5;
const int MOD = 998244353;

ll bigMOD(ll n, ll b){
    if(!b) return 1LL;
    ll x = bigMOD(n, b / (ll)2);
    x = (x * x) % MOD;
    if(b & 1) x = (x * n) % MOD;
    return x;
}

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    vector<vector<int>>ncr(N, vector<int>(N));
    for(int i = 0; i < N; i += 1){
        ncr[i][0] = 1;
        for(int j = 1; j < N; j += 1) ncr[i][j] = (ncr[i - 1][j] + ncr[i - 1][j - 1]) % MOD;
    }
    
    ll ans = 0;
    for(int i = 1; i <= m; i += 1){
        int gri = n - k + 1, zeros = 0;
        for(int j: vc){
            gri -= (j >= i), zeros += (j == 0);
        }
        if(gri < 0 or gri > zeros){
            ans += (gri < 0);
            continue;
        }

        ll prob = ((ll)(m - i + 1) * bigMOD(m, MOD - 2)) % MOD;
        vector<int>p_pow(zeros + 1, 1), q_pow(zeros + 1, 1);
        for(int j = 1; j < zeros + 1; j += 1) p_pow[j] = ((ll)p_pow[j - 1] * prob) % MOD, q_pow[j] = ((ll)q_pow[j - 1] * (1 - prob)) % MOD;
        for(int j = gri; j <= zeros; j += 1) ans = (ans + (((ncr[zeros][j] * p_pow[j]) % MOD) * q_pow[zeros - j]) % MOD) % MOD;
    }
    cout << ans << '\n';
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