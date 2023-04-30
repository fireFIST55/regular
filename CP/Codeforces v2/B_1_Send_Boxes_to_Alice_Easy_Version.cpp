#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll ans = LONG_LONG_MAX; cin >> n;
    vector<int>index;
    for(int i = 1; i <= n; i += 1){
        int a; cin >> a;
        if(a) index.emplace_back(i);
    }
    int m = index.size();
    if(m == 1){
        cout << - 1 << '\n';
        return;
    }
    function<ll(int p)>khela = [&](int p){
        ll cost = 0;
        for(int i = 0; i < index.size(); i += p){
            int median = index[(i + i + p - 1) >> 1];
            for(int k = i; k < i + p; k += 1){
                cost += (ll)abs(median - index[k]);
            }
        }
        return cost;
    };
    for(int i = 2; i * i <= m; i += 2){
        if(!(m % i)){
            while(!(m % i)){
                m /= i;
            }
            ans = min(ans, khela(i));
        }
        if(i == 2) i -= 1;
    }
    if(m > 1) ans = min(ans, khela(m));
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