#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000005
vector<ll>prime;
bool primeX[M];
void sieve(){
    int i;
    memset(primeX,true,sizeof(primeX));
    prime.push_back(2);
    for(i=4;i<=M;i+=2)
        primeX[i]=false;
    for(i=3;i<=sqrt(M);i+=2){
        if(primeX[i]){
            prime.push_back(i);
            for(int j=i*i;j<=M;j+=i*2)
                primeX[j]=false;
        }
    }
    for(;i<=M;i+=2){
        if(primeX[i])
            prime.push_back(i);
    }
}
ll nod(ll n){
    ll ans=1,count;
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
        if(!(n%prime[i])){
            count=0;
            while(!(n%prime[i])){
                n/=prime[i];
                count++;
            }
            ans*=(count+1);
        }
    }
    if(n>1)
        ans*=2;
    return ans-1;
}
int main(void){
    sieve();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ll n,res;
        scanf("%lld",&n);
        res=nod(n);
        printf("Case %d: %lld\n",cs++,res);
    }
    return 0;
}