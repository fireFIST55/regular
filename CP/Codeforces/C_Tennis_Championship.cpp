#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, a = 1, b = 2, ans = 0; cin >> n;
    while(a <= n){
        b += a; a = (b - a); ans++;
    }
    cout << - 1 + ans << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while(t--)
        solve();
    
    return 0;
}