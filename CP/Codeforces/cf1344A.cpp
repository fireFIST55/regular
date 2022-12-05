#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n; cin >> n;
    vector<ll>vc(n);
    map<ll, int>khela;
    for(ll i = 0; i < n; i += 1){
        ll a; cin >> a;
        khela[((i + a)%n + n)%n] += 1;
    }

    if(khela.size() == n) cout << "YES\n";
    else cout << "NO\n";
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