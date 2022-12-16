#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll MOD = 998244353;

void solve(){
    int n, k; cin >> n >> k;
    vector<int>a(n), b(k), index(n + 5), cant(n);
    for(int i = 0; i < n; i += 1){
        cin >> a[i]; index[a[i]] = i;
    }
    for(int i = 0; i < k; i += 1){
        cin >> b[i]; cant[index[b[i]]] = 1;
    }

    function<ll(int index)> calc = [&](int index){
        ll ok = 0;
        if(index + 1 < n){
            if(!cant[index + 1]) ok += 1;
        }

        if(index - 1 >= 0){
            if(!cant[index - 1]) ok += 1;
        }
        return ok;
    };
    ll ans = 1;
    for(int i = 0; i < k; i += 1){
        int indx = index[b[i]];
        ans = (ans * calc(indx)) % MOD;
        cant[indx] = 0;
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