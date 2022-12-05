#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

void solve(){
    ull a, x, g = 0;
    int n, m; cin >> n >> m;
    vector<ull>vc(n);
    for(ull &i: vc) cin >> i;
    sort(vc.begin(), vc.end());

    for(int i = 1; i < n; i += 1)
        g = __gcd(g, vc[i] - vc[0]);
    
    for(int i = 0; i < m; i += 1){
        cin >> a;
        ull ans = __gcd(g, vc[0] + a);  cout << ans << ' ';
    }
    cout << '\n';
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