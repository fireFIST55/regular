#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>a(n), b(n);
    for(int i = 0; i < n; i += 1){
        cin >> a[i] >> b[i];
    }

    ll ans = 0, mn = 1e15;
    for(int i = 0; i < n; i += 1){
        ans += max((ll)0, a[(i + 1)%n] - b[i]);
        mn = min(mn, min(a[(i + 1)%n], b[i]));
    }

    ans = ans + mn;
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