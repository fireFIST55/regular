#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll k; cin >> n >> k;
    vector<int>del(n);
    priority_queue<pair<ll, int>>h, p;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a; h.push({- a, i});
    }
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a; p.push({- a, i});
    }
    ll x = k;
    while(k >= 0 && !h.empty()){
        while(!h.empty()){
            if((- h.top().first - x) <= 0){
                del[h.top().second] = 1; h.pop();
            }
            else break;
        }
        while(!p.empty()){
            if(del[p.top().second]) p.pop();
            else break;
        }

        k += p.top().first; x += k;
    }
    if(h.empty()) cout << "YES\n";
    else cout << "NO\n";
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