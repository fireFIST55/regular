#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n;
    ll a, k;
    ll mx = LONG_LONG_MIN;
    cin>>n>>k;
    vector<ll>ar(n);

    for(ll &X: ar)
        cin>>X;

    for(ll i = max({0ll, (n-2*k-1)}); i<n; i++){

        for(ll j = i+1; j<n; j++){
            ll y = (i+1)*(j+1) - k*(ar[i]|ar[j]);

            mx = max(mx, y);
        }
    }
    
    cout<<mx<<endl;
}

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}