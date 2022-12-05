#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define  mod 1000000007
ll prime[200001];
void genPrimeFac(ll n){
    prime[0]=1;
    for(ll i=1;i<=n;i++)
        prime[i]=(prime[i-1]*(i%mod))%mod;
}
void solve(){
    ll a,n,ans=0,x;
    cin>>n;
    genPrimeFac(n);
    map<ll,ll>freq;
    for(int i=0;i<n;i++){
        cin>>a;
        if(!i)  x=a;
        else    x&=a;
        freq[a]+=1;
    }
    if(freq[x]>=2){
        ans=((freq[x]%mod*(freq[x]-1)%mod))%mod;
        ans=(ans%mod*prime[n-2]%mod)%mod;
    }
    cout<<ans<<endl;
}
int main(void){
    encoding_898;
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}