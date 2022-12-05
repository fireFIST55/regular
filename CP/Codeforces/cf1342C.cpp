#include<bits/stdc++.h>
#define ll long long
using namespace std;

int len;
const int M = 1e5 + 5;
vector<int>pre(M);

void build(int a, int b){
    len = a * b;
    for(int i = 1; i <= a*b; i += 1){
        pre[i] = pre[i - 1];
        if(((i % a) % b) != ((i % b) % a)) pre[i] += 1;
    }
}

ll fun(ll l){
    ll temp = pre[len]*(l/(ll)len) + (ll)pre[l%len];
    return temp;
}

void solve(){
    int a, b, q;    cin >> a >> b >> q;
    build(a, b);
    
    for(int i = 0; i < q; i += 1){
        ll l, r; cin >> l >> r;
        ll ans = fun(r) - fun(l - 1);
        cout << ans << ' ';
    }

    cout << '\n';
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