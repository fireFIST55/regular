#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define mod 1000003
#define M 1000000
ll fact[M+3];
void factorial(){
    fact[0]=1;
    for(ll i=1;i<=M;i++)
        fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
}
ll bigMOD(ll x,ll y){
    if(!y)
        return 1;
    ll a=bigMOD(x,y/2)%mod;
    a=(a*a)%mod;
    if(y&1)
        a=(a*(x%mod))%mod;
    return a;
}
ll modInverse(ll n){
    return bigMOD(n,mod-2);
}
ll binomialCoeff(ll n,ll k){
    ll x=modInverse(fact[k]),y=modInverse(fact[n-k]);
    n=fact[n];
    n=((n%mod)*x)%mod;
    n=((n%mod)*y)%mod;
    return n;
}
int main(void){
    factorial();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ll n,k;
        scanf("%llu %llu",&n,&k);
        ll ncr=binomialCoeff(n,k);
        printf("Case %d: %llu\n",cs++,ncr);
    }
    return 0;
}