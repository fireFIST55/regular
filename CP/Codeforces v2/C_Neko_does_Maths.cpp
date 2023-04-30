#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a, b; cin >> a >> b;
    if(a < b) swap(a, b);
    ll x = (a - b);
    vector<ll>khela;
    for(ll i = 1; i * i <= x; i += 1){
        if(!(x % i)){
            khela.emplace_back(i);
            if((x / i) != i) khela.emplace_back(x / i);
        }
    }
    ll ans = LONG_LONG_MAX, k = 0;
    sort(khela.begin(), khela.end());
    for(int i = 0; i < khela.size(); i += 1){
        //cout << khela[i] << ' ';
        if((a % khela[i]) != (b % khela[i])) continue;
        if(!(b % khela[i])){
            ll val = 0, curr = (a * b) / __gcd(a, b);
            if(curr <= ans) ans = curr, k = 0; 
        }
        else{
            ll val = khela[i] - (b % khela[i]), curr = ((a + val) * (b + val)) / __gcd((a + val), (b + val));
            if(curr < ans || (ans == curr && val < k)) ans = curr, k = val;
        }
    }
    //cout << endl;
    cout << k << '\n';
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