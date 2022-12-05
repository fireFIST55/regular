#include<bits/stdc++.h>
#define ll long long
#define MOD 998244353
using namespace std;

void solve(){
    ll k;
    int n, m, q; cin >> n >> m >> k >> q;
    vector<int>x(q), y(q);
    for(int i = 0; i < q; i += 1) cin >> x[i] >> y[i];

    ll ans = 1;
    set<int>donex, doney;
    for(int i = q - 1; i >= 0; i -= 1){
        bool khela = false;
        if(!donex.count(x[i])){
            khela = 1; donex.insert(x[i]);
        }

        if(!doney.count(y[i])){
            khela = 1; doney.insert(y[i]);
        }

        if(khela) ans = (ans * k)%MOD;

        if(donex.size() == n || doney.size() == m) break;
    }

    cout << ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}