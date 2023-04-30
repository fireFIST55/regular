#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll ans = 1;
    int n, m, pos; cin >> n >> m;
    vector<int>vc(n), neg(n + 5, 0), pstv(n + 5, 0);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i];
        if(vc[i] == m) pos = i;
    }
    int sm = 0;
    for(int i = pos + 1; i < n; i += 1){
        if(vc[i] < m) sm -= 1;
        else sm += 1;
        ans += (ll)((!sm || sm == 1)?1: 0);

        if(sm >= 0) pstv[sm] += 1;
        else neg[abs(sm)] += 1;
    }
    sm = 0;
    for(int i = pos - 1; i >= 0; i -= 1){
        if(vc[i] < m) sm -= 1;
        else sm += 1;
        ans += (ll)((!sm || sm == 1)?1: 0);

        if(sm > 0) ans += (ll)0 + ((sm - 1)?neg[sm - 1]: pstv[0]) + neg[sm];
        else ans += (ll)0 + pstv[-sm] + pstv[-sm + 1];
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