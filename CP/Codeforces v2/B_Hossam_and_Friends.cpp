#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll calc(ll n){
    ll one = 1, two = 2, ans = n * (n + one) / two;
    return ans;
}

void solve(){
    int n, m; cin >> n >> m;
    vector<int>khela(n + 5, 0);
    for(int i = 0; i < m; i += 1){
        int u, v; cin >> u >> v; 
        if(u > v) swap(u, v);
        khela[u] = min(khela[u], v);
    }
    ll ans = 0;
    for(int i = n; i > 0; i -= 1){
        ans += calc((khela[i] == 0?n + 1: khela[i]) - i);
    }
    cout << ans << '\n';
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