#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp1(pair<int, int>a, pair<int, int>b){
    if(a.first <= b.first) return 1;
    else return 0;
}

bool cmp2(pair<int, int>a, pair<int, int>b){
    if(a.second <= b.second) return 1;
    else return 0;
}

void solve(){
    int n, sq = 0; cin >> n;
    vector<pair<ll, ll>>vp;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        ll kl = sqrt(a) + .0000000001, kh = kl + 1;
        if(kl*kl == a){
            vp.push_back({0, (a?1: 2)}); sq += 1;
        }
        else{
            if(abs(a - kl*kl) <= abs(a - kh*kh)) vp.push_back({abs(a - kl*kl), 0});
            else vp.push_back({abs(a - kh*kh), 0});
        }
    }

    ll ans = 0;
    if(sq == n / 2) ans = 0;
    else if(sq > n/2){
        int need = sq - n/2; sort(vp.begin(), vp.end(), cmp2);
        for(int i = n - sq, k = 0; k < need; i += 1, k += 1){
            ans += vp[i].second;
        }
    }
    else{
        int need = n/2 - sq; sort(vp.begin(), vp.end(), cmp1);
        for(int i = sq, k = 0; k < need; k += 1, i += 1) ans += vp[i].first;
    }
    cout << ans << '\n';
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