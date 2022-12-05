#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,r,n,m,last=0;
    double p,ans=0.0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(i!=a)    last=i;
    }
    if(!last)    ans=1;
    for(int i=0;i<m;i++){
        cin>>r>>p;
        if(last&&r>=last)
            ans+=(1.0-ans)*p;
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