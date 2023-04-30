#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<int>vc(n), appear(n + m + 5, - 1), cnt(n + m + 5, 0);
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; appear[vc[i]] = 0;
    }
    ll base = (ll)1 * m * (m + 1) / 2, ans = 0;
    for(int i = 1; i <= m; i += 1){
        int x, y; cin >> x >> y; cnt[vc[x - 1]] += (i - appear[vc[x - 1]]);
        appear[vc[x - 1]] = - 1; appear[y] = i;
        vc[x - 1] = y;
    }
    for(int i = 1; i <= n + m; i += 1){
        if(appear[i] != - 1) cnt[i] += (m - appear[i]);
        ans += (ll)(base - (ll)1 * (m - cnt[i]) * (m - cnt[i] + 1) / 2);
    }
    cout << ans << '\n';
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