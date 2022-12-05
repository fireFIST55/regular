#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int ans=0;
    ll X,Y,dif;
    cin>>X>>Y;
    dif=abs(X-Y);

    if(dif){
        double a=1,b=1,c=dif*2;
        ll x=0;
        x=(-b+sqrt(b*b+4*c)+1)/2;

        while(ll s=(x*(x+1)/2)<dif)    x+=1;
        ll s=(x*(x+1)/2);
        if((min(X,Y)+s-max(X,Y))&1){
            while((x*(x+1)/2)%2!=dif%2) x+=1;
        }
        
        ans=x;
    }
    
    cout<<ans<<endl;
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