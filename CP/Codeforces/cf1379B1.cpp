#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve(){
    ll a,b,c,l,r,m,x,y;
    cin>>l>>r>>m;
    x=m+(l-r);
    y=m+(r-l);
    for(ll i=l;i<=r;i++){
        ll n_into_a=y-y%i;
        if(n_into_a>=x&&n_into_a<=y){
            a=i;
            if(n_into_a>m){
                ll dif=n_into_a-m;
                c=r;
                b=c-dif;
            }
            else{
                ll dif=m-n_into_a;
                b=r;
                c=r-dif;
            }
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
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