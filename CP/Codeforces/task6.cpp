#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[105][105];
ll n,m,k;
void rowfill(ll i,ll j,ll x){
    if(j==n) return;
    a[i][j]=x; rowfill(i,j+1,x-1);

}
void colfill(ll i,ll j,ll x){
    if(i==n) return;
    a[i][j]=x; colfill(i+1,j,x-1);
}
void f(ll i,ll j,ll x){
    if(i==n||j==n) return;
    a[i][j]=x;
    rowfill(i,j+1,x-1); colfill(i+1,j,x-1);
    f(i+1,j+1,x+k);
}

void solve()
{
   ll i,j;
   cin>>n>>m>>k; f(0,0,m);
   for(i=0;i<n;i++){
        for(j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
   }

    
}
int main(){
    ll t=1;
    ll i,j;
    ll cas=1;
    
   // cin>>t;
    while(t--)
    {
       // cout<<"Case "<<cas++<<": ";
        solve();
    }
}
