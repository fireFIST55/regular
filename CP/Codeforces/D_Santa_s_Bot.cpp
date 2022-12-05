#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 5;
vector<ll>inv(N), freq(N);
ll MOD = 998244353;

ll bigMOD(ll a, ll b){
    if(!b) return 1;
    ll x = bigMOD(a, b / 2);
    x = (x * x) % MOD;

    if(b & 1) x = (x * a) % MOD;
    return x;
}

void solve(){
    int n;
    ll nom = 0, ans = 0; cin >> n;
    vector<int>vc[n];
    for(int i = 0; i < n; i += 1){
        int k; cin >> k; nom += k;
        for(int j = 0; j < k; j += 1){
            int a; cin >> a;
            vc[i].emplace_back(a); freq[a] += 1;
        }
    }

    for(int i = 0; i <= N; i += 1) inv[i] = bigMOD(i, MOD - 2);

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < vc[i].size(); j += 1){
            ans = (ans + (((inv[n] * inv[(int)vc[i].size()]) % MOD) * ((freq[vc[i][j]] * inv[n]) % MOD) % MOD)) % MOD;
        }
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