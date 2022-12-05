#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll sm = 0, mx = INT_MIN;
    int n; cin >> n;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        sm += a; mx = max(mx, a);
    }

    sm -= mx;
    if(mx){
        if(mx > sm) cout << mx - sm;
        else cout << 1;
    }
    else cout << 0;

    cout << '\n';
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