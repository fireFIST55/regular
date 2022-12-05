#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, y, sm = 0; cin >> n;
    vector<ll>b(n + 1), ans(n + 1);
    for(int i = 1; i <= n; i += 1){
        cin >> b[i]; sm += b[i];
    }

    y = (n*(n + 1))/(ll)2;
    if((sm%y)){
        cout << "NO\n";
        return;
    }

    sm = sm/y;
    for(int i = 1; i <= n; i += 1){
        ll x = (sm - b[i] + b[(i > 1?i - 1: n)]);
        if(x%n || x <= 0){
            cout << "NO\n";
            return;
        }

        ans[i] = x/n;
    }

    cout << "YES\n";
    for(int i = 1; i <= n; i += 1) cout << ans[i] << ' ';
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