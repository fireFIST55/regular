#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, c, d; cin >> n >> c >> d;
    vector<int>vc(n);
    for(int &i: vc) cin >> i;
    sort(vc.begin(), vc.end());
    ll bc = 0, cost = LONG_LONG_MAX;
    for(int i = 1; i < n; i += 1){
        if(vc[i] - vc[i - 1] > 1 || i == n - 1){
            cost = min(cost, bc + (i == n - 1 ?0LL: c * (n - 1 - i + 1)));
            bc += d * (vc[i] - vc[i - 1] - 1);
        }
    }
    if(n == 1) cost = min(d * (vc[0] - 1), c + d);
    cout << cost << '\n';
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