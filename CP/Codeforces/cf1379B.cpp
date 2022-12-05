#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    ll l,r,m;
    cin>>l>>r>>m;
    for(ll i=l;i<=r;i++){
        ll mx=r-i;
        for(ll j=max(l*2,l+m);;j++){
            ll a=j-m;
            ll x=i,y=j%i,z=j-m;
            // cout<<"Pre:\t"<<j<<" i:\t"<<i<<" n:\t"<<j/i<<endl;
            // cout<<x<<' '<<y<<' '<<z<<endl<<endl;
            if(z>r) break;
            if(y<l) y+=i;
            if(x>=l&&x<=r&&y>=l&&y<=r&&z>=l){
                cout<<x<<' '<<y<<' '<<z<<endl;
                return;
            }
        }
    }
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