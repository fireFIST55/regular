#include<bits/stdc++.h>
#define ll long long
using namespace std;

int bestPos(vector<ll>vc, int x){
    int pos = 0;
    ll mn = LONG_LONG_MAX;
    for(int i = 0; i < vc.size(); i += 1){
        if(abs(x - vc[i]) < mn){
            mn = abs(x - vc[i]); pos = i;
        }
    }

    return pos;
}

void solve(){
    int n; cin >> n;
    vector<ll>a(n), b(n);
    for(ll &i: a) cin >> i;
    for(ll &i: b) cin >> i;

    ll ans = LONG_LONG_MAX;
    vector<int>A1{0, bestPos(b, a[0]), n - 1};
    vector<int>A2{0, bestPos(b, a[n - 1]), n - 1};
    int b1 = bestPos(a, b[0]), b2 = bestPos(a, b[n - 1]);
    
    for(int x: A1){
        for(int y: A2){
            ll curr = abs(a[0] - b[x]) + abs(a[n - 1] - b[y]);
            if(x > 0 && y > 0) curr += abs(b[0] - a[b1]);
            if(x < n - 1 && y < n - 1) curr += abs(b[n - 1] - a[b2]);

            ans = min(ans, curr);
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