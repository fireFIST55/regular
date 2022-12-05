#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>vc(n);
    for(ll &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    ll x = vc[0]*vc[n - 1];
    vector<ll>div;
    for(int i = 2; i*(ll)i <= x; i += 1){
        if(!(x%i)){
            div.push_back(i);

            if(i != x/i) div.push_back(x/i);
        }
    }

    sort(div.begin(), div.end());
    if(div == vc) cout << x << '\n';
    else cout << -1 << '\n';
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