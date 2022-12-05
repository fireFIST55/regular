#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int MX = 100 * 100 + 5;

int khela(int a){
    return a * a;
}

void solve(){
    int n; cin >> n;
    vector<int>a(n), b(n);
    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;

    bitset<MX>dp;
    int mxSm = 0, mnSm = 0, sqr = 0;
    for(int i = 0; i < n; i += 0){
        if(a[i] > b[i]) swap(a[i], b[i]);
        sqr += khela(a[i]) + khela(b[i]); 
        mnSm += a[i]; mxSm += b[i]; dp |= dp << (b[i] - a[i]);
    }

    int ans = khela(mxSm) + khela(mnSm); dp[0] = 1;
    for(int i = 0; i <= mxSm - mnSm; i += 1){
        if(dp[i]) ans = min(ans, khela(mnSm + i) + khela(mxSm + i));
    }
    cout << (n - 2) * sqr + ans << '\n';
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