#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll need;
    int n, pos; cin >> n >> pos; pos -= 1;
    vector<ll>vc(n);
    deque<ll>points;
    for(ll &i: vc) cin >> i;
    for(int i = 0; i < n; i += 1){
        ll x; cin >> x; points.push_back(x);
    }
    need = vc[pos];
    sort(vc.begin(), vc.end());

    int i = 0;
    while(vc[i] != need) i += 1;
    need = vc[i] + points.front(); points.pop_front();

    i += 1;
    for(; i < n; i += 1){
        while(!points.empty() && points.front() + vc[i] > need){
            points.pop_front();
        }

        if(points.empty()) break;
        points.pop_front();
    }
    cout << n - i + 1 << '\n';
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