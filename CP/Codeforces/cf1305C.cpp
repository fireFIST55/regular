#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll k;
    int n; cin >> n >> k;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    if(n > k){
        cout << 0 << '\n';
        return;
    }


    ll ans = 1;
    for(int i = 0; i < n; i += 1){
        for(int j = i + 1; j < n; j += 1){
            ans = (ans * abs(vc[i] - vc[j])) % k;
        }
    }

    cout <<  ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}