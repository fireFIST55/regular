#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m; cin >> n >> m;
    if(n == 1 && m == 1) cout << 0 << '\n';
    else if(n == 1 || m == 1) cout << max(n, m) << '\n';
    else cout << n - (ll)1 + m - (ll)1 + min(n, m) << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}