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
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll dif=y-x;
        for(ll i=1;i<=dif;i++){
            if(dif%i)   continue;
            if(dif/i+1>n)   continue;
            ll a=min((y-1)/i,(n-1)),b=y-a*i;
            for(ll j=0;j<n;j++)
                cout<<b+i*j<<" ";
            break;
        }
        cout<<"\n";
    }
    return 0;
}