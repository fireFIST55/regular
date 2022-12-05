#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int, pair<ll, int>>>vp;
    vector<ll>ans(n), power(n);
    for(ll &i: power) cin >> i;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a; vp.push_back({power[i], {a, i}});
    }

    ll sm = 0;
    priority_queue<ll>pq;
    sort(vp.begin(), vp.end());
    for(int i = 0; i < n; i += 1){
        sm += vp[i].second.first;
        ans[vp[i].second.second] = sm; pq.push(-vp[i].second.first);

        if(i > k - 1){
            sm += pq.top(); pq.pop();
        }
    }
    for(ll i: ans) cout << i << ' ';
    cout << '\n';
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