#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll sum = 0;
    ll n, k; cin >> n >> k;
    vector<ll>vc;
    for(ll i = 0; i < n; i += 1){
        ll a; cin >> a; vc.emplace_back(a - (n - (ll)1 - i)); sum += a;
    }
    sort(vc.rbegin(), vc.rend());

    for(int i = 0; i < k; i += 1){
        sum -= vc[i];
    }
    sum -= ((k*(k - 1))/(ll)2); cout << sum << '\n';
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