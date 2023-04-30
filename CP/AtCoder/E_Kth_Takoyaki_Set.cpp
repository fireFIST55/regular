#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    set<ll>khela; khela.insert(0);
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    for(int i = 0; i < k; i += 1){
        ll x = *khela.begin();
        for(int j = 0; j < n; j += 1){
            khela.insert(x + vc[j]);
        }
        khela.erase(khela.begin());
    }
    cout << *khela.begin() << '\n';
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