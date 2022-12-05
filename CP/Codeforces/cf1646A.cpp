#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll n, s; cin >> n >> s;
    ll ans = s/(n*n);
    cout << ans << '\n';
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