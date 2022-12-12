#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    ll sm = 0, mn = INT_MAX;
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1){
            ll a; cin >> a; 
            if(j || (i && !j)) mn = min(mn, a);
            sm += a;
        }
    }
    cout << sm - mn << '\n';
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