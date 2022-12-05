#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int l, r, n; cin >> l >> r;
    n = r - l + 1;
    vector<int>vc(n), need(17), have(17);
    for(int &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        for(int k = 0; k < 17; k += 1){
            if(i & (1 << k)) need[k] += 1;

            if(vc[i] & (1 << k)) have[k] += 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < 17; i += 1){
        if(have[i] != need[i]) ans |= (1 << i);
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