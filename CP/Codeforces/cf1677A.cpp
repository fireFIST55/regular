#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int>vc(n), haveL(n);
    for(int &i: vc) cin >> i;
    for(int b = 0; b < n; b += 1){
        for(int d = b + 1; d < n; d += 1){
            if(vc[b] > vc[d]) haveL[b] += 1;
        }
    }

    ll ans = 0;
    vector<int>total(n);
    for(int c = 1; c < n; c += 1){
        for(int b = 0; b < c; b += 1){
            if(vc[b] > vc[c]) haveL[b] -= 1;
            total[b] = (b?total[b - 1]: 0) + haveL[b];
        }

        for(int a = 0; a < c; a += 1){
            if(vc[a] < vc[c]) ans += (ll)(total[c - 1] - total[a]);
        }
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