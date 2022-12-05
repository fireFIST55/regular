#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    ll n, k; cin >> n >> k;
    if(k > 43){
        cout << "No\n";
        return;
    }

    set<ll>st;
    for(ll i = 1; i <= k; i += 1) st.insert(n%i);
    if(st.size() != k) cout << "No\n";
    else cout << "Yes\n";
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