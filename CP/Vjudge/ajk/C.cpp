#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(){
    ll mx = 0, curr = 0;
    int n; cin >> n;
    for(int i = 0; i < n - 1; i += 1){
        ll a, b; cin >> a >> b;
        curr += a; curr -= b; mx = max(mx, curr);
    }
    return mx;
}

int main(void){
    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i += 1){
        ll res = solve();
        cout << "Case " << i + 1 << ": " << res << '\n'; 
    }
    
    return 0;
}