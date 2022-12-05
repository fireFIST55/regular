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
    ll a,n,x,ans=0;
    cin>>n;
    map<int,ll>ma;
    for(int i=0;i<n;i++){
        cin>>a;
        ma[a-i]+=a;
        ans=max(ans,ma[a-i]);
    }
    cout<<ans<<"\n";
    return 0;
}