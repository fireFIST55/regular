#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(void){
    encoding_898;
    int t;
    ll r,n,c,m;
    cin>>t;
    while(t--){
        cin>>n>>m>>r>>c;
        ll x=(r-1)+(c-1),y=(n-r)+(m-c),z=(r-1)+(m-c),p=(n-r)+(c-1),res;
        res=max(x,y);
        res=max(res,z);
        res=max(res,p);
        cout<<res<<"\n";
    }
    return 0;
}