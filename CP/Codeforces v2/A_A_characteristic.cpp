#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll n){
    if(n <= 1) return 0;
    else return ((n * (n - 1)) / (ll)2);
}

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 0; i <= n; i += 1){
        ll cnt = calc(i) + calc(n - i);
        if(cnt == k){
            cout << "YES\n";
            for(int j = 0; j < i; j += 1) cout << 1 << ' ';
            for(int j = 0; j < n - i; j += 1) cout << - 1 << ' ';
            cout << '\n';
            return;
        }
    }
    cout << "NO\n";
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i += 1)
        solve();

    return 0;
}