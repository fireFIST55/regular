#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve(){
    int i=0,n,k,x,y,tot,wins,draws;
    cin>>n;
    x=wins=(n-1)/2; 
    y=draws=(n-1)&1?1:0;
    k=n-1,tot=(n*(n-1))/2;
    while(tot--){
        if(x){
            cout<<1<<' ';
            x-=1;
        }
        else if(y){
            cout<<0<<' ';
            y-=1;
        }
        else cout<<-1<<' ';
        i+=1;
        if(i==k){
            i=0;
            k-=1;
            x=wins,y=draws;
        }
    }
    cout<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}