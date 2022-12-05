#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(void){
    encoding_898;
    ll n,k,total=1,a,b,x=-1,ans;
    cin>>n>>k;
    a=n-k;
    for(ll i=0;i<n;i++){
        cin>>b;
        if(b>a){
            if(x!=-1)
                total*=(i-x);
            total%=998244353;
            x=i;
        }
    }
    ans=(n*(n+1)/2)-(a*(a+1))/2;
    cout<<ans<<" "<<total<<"\n";
    return 0;
}