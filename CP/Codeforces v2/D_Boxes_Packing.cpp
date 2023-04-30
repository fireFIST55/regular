#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int cnt = 0, box = 0;
    ll n, m, k; cin >> n >> m >> k;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    for(int i = n - 1; i >= 0 && box < m; i -= 1){
        ll curr = 0;
        int j = i, curcnt = 0;
        while(j >= 0 && curr + vc[j] <= k){
            curr += vc[j--]; cnt += 1; curcnt += 1;
        }
        if(!curcnt) break;
        i = j + 1; box += 1;
    }
    cout << cnt << '\n';
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