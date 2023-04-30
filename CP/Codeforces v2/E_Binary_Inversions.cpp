#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll inv = 0, ans = 0;
    int n; cin >> n;
    vector<int>vc(n), prefix(n), suffix(n + 5);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1) prefix[i] = (i?prefix[i - 1]: 0) + vc[i];
    for(int i = n - 1; i >= 0; i -= 1) suffix[i] = suffix[i + 1] + (vc[i] == 0);
    for(int i = 0; i < n; i += 1){
        if(!vc[i]) continue;
        inv += suffix[i];
    }
    ans = max(ans, inv);
    for(int i = 0; i < n; i += 1){
        if(vc[i]) ans = max(ans, inv + (i?prefix[i - 1]: 0) - (i + 1 < n?suffix[i + 1]: 0));
        else ans = max(ans, inv + (i + 1 < n?suffix[i + 1]: 0) - (i?prefix[i - 1]: 0));
    }
    cout << ans << '\n';
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