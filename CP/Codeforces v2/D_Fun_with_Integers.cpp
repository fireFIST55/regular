#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll ans = 0;
    for(int i = 2; i <= n; i += 1){
        for(int j = i * 2; j <= n; j += i){
            ans += (ll)(4 *(j / i));
        }
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