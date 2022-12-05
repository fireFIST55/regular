#include<bits/stdc++.h>
#define ll long long
using namespace std;

void print(){
    cout << 0 << '\n';
}

void solve(){
    ll n, q, c; cin >> n >> q >> c;
    vector<pair<pair<ll, ll>, int>>vp;
    for(int i = 0; i < n; i += 1){
        ll u, v, s; cin >> u >> v >> s;
        vp.push_back({{u, v}, s});
    }
    sort(vp.begin(), vp.end());
    vector<int>x, y, prefix(n);
    for(int i = 0; i < n; i += 1){
        prefix[i] = (i?prefix[i - 1]: 0) + vp[i].second;
        x.emplace_back(vp[i].first.first); y.emplace_back(vp[i].first.second);
    }
    // for(int i = 0; i < n; i += 1) cout << x[i] << " " << y[i] << endl;
    // cout << endl;
    
    for(int i = 0; i < q; i += 1){
        ll mmnt, x1, y1, x2, y2; cin >> mmnt >> x1 >> y1 >> x2 >> y2;
        ll l1 = lower_bound(x.begin(), x.end(), x1) - x.begin();
        if(l1 == n || x[l1] > x2){
            print(); continue;
        }

        ll r1 = lower_bound(y.begin() + l1, y.end(), y1) - y.begin();
        if(r1 == n || y[r1] > y2){
            print(); continue;
        }
        ll l = max(l1, r1); r1 = n;
        l1 = lower_bound(x.begin() + l, x.end(), x2) - x.begin();
        if(l1 < n && x[l1] > x2) l1 -= 1;

        r1 = lower_bound(y.begin() + l, y.end(), y2) - y.begin();
        if(r1 < n && y[r1] > y2) r1 -= 1;
        ll r = min(l1, r1); 
        if(r == n) r-= 1;

        //cout << l << " " << r << endl;
        // cout << prefix[r] << ' ' << prefix[l] << endl;
        ll ans =  ((prefix[r] - (l?prefix[l - 1]: 0)) % (c + 1) + ((r - l + 1)*mmnt) % (c + 1)) % (c + 1);
        cout << ans << '\n';
    }
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