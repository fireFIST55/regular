#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void solve(){
    int n;
    ll x, y; cin >> n >> x >> y;
    vector<ll>vc(n);
    
    for(int i = 0; i < n; i += 1){
        cin >> vc[i]; x += vc[i];
    }

    if(((y&1) && (x&1)) || (!(y&1) && !(x&1))) cout << "Alice\n";
    else cout << "Bob\n";
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