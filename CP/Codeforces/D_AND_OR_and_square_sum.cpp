#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), freq(20);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        for(int k = 0; k < 20; k += 1){
            if(vc[i] & (1 << k)) freq[k] += 1;
        }
    }

    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < 20; k += 1){
            if(freq[k]) vc[i] |= (1 << k), freq[k] -= 1;
            else if(vc[i] & (1 << k)) vc[i] ^= (1 << k);
        }
    }

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        ll a = vc[i]; ans += (a * a);
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