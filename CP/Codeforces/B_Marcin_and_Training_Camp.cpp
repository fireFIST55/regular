#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll>a(n), b(n);
    map<ll, int>khela;
    vector<ll>taken, rest;
    for(ll &i: a){
        cin >> i; khela[i] += 1;
    }
    for(ll &i: b) cin >> i;

    ll ans = 0;
    for(int i = 0; i < n; i += 1){
        if(khela[a[i]] > 1){
            taken.emplace_back(a[i]); ans += b[i];
        }
        else rest.emplace_back(i);
    }

    for(ll i: rest){
        for(ll k: taken){
            if((a[i] | k) == k){
                ans += b[i]; break;
            }
        }
    }
    cout << ans << "\n";
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