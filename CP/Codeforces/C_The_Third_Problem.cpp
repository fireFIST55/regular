#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    vector<int>pos(n);
    for(int i = 0; i < n; i += 1){
        int a; cin >> a;
        pos[a] = i;
    }

    ll ans = 1;
    int l, r = pos[0]; l = r;
    for(int i = 1; i < n; i += 1){
        if(pos[i] < l) l = pos[i];
        else if(pos[i] > r) r = pos[i];
        else ans = ((r - l + 1 - i) * ans) % MOD;
    }
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