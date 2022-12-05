#include<bits/stdc++.h>
using namespace std;
#define M 1000000
#define ll long long
vector<ll>prime;
bool primeX[M+1];
void sieveofErastosthenes(){
    memset(primeX,true,sizeof(primeX));
    prime.push_back(2);
    for(ll i=4;i<=M;i+=2)
        primeX[i]=false;
    for(ll i=3;i<=sqrt(M);i+=2){
        if(primeX[i]){
            prime.push_back(i);
            for(ll j=i*i;j<=M;j+=i*2)
                primeX[j]=false;
        }
    }
}
ll calc(ll num){
    ll count=1;
    for(ll i=0;prime[i]*prime[i]<=num;i++){
        if(!(num%prime[i])){
            count++;
            break;
        }
    }
    return count;
}
int main(void){
    sieveofErastosthenes();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ll x,res;
        scanf("%lld",&x);
        res=calc(x);
        printf("Case %d: %lld\n",cs++,res);
    }
    return 0;
}