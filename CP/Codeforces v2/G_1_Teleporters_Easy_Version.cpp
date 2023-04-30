#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll c, sum = 0; cin >> n >> c; 
    vector<ll>vc(n);
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a;
        vc[i] = a + (ll) (i + 1);
    }
    sort(vc.begin(), vc.end()); int cnt = 0;
    for(int i = 0; i < n; i += 1){
        sum += vc[i];
        if(sum <= c) cnt += 1;
    }
    cout << cnt << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
        solve();
    
    return 0;
}