#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; 
    ll k; cin >> n >> k;
    priority_queue<ll>khela;
    for(int i = 0; i < n; i += 1){
        ll a; cin >> a; khela.push(-a);
    }

    int cnt = 0;
    while(khela.size() > 1){
        ll a = -khela.top(); if(a >= k) break;
        khela.pop();
        ll b = -khela.top(); khela.pop(); khela.push(-(a + (ll)2*b));
        cnt += 1;
    }
    if(-khela.top() >= k) cout << cnt << '\n';
    else cout << - 1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();
    
    return 0;
}