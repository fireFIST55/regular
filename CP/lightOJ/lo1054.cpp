#include<bits/stdc++.h>
using namespace std;
#define M 100005
#define mod 1000000007
#define ull unsigned long long
vector<ull>prime;
ull bigMOD(ull a,ull b){
    if(!b)
        return 1;
    ull x=bigMOD(a,b/2);
    ull y=((x%mod)*(x%mod))%mod;
    if(b&1)
        y=(y*(a%mod))%mod;
    return y;
}
int gcdEuclidean(ull a,ull b){
    if(!b)
        return a;
    int x=gcdEuclidean(b,a%b);
    return x;
}
ull mulInverse(ull a){
    ull x=mod;
    int gcd=gcdEuclidean(a,x);
    if(gcd!=1)
        return 0;
    return bigMOD(a,mod-2);
}
void sieveofErastosthenes(){
    bool primeX[M];
    memset(primeX,true,sizeof(primeX));
    prime.push_back(2);
    for(ull i=3;i<=sqrt(M);i+=2){
        if(primeX[i]){
            prime.push_back(i);
            for(ull j=i*i;j<=M;j+=i*2)
                primeX[j]=false;
        }
    }
    for(ull i=sqrt(M)+2;i<=M;i+=2){
        if(primeX[i])
            prime.push_back(i);
    }
}
int main(void){
    sieveofErastosthenes();
    int t,cs=1;
    scanf("%d",&t);
    while(t--){
        ull n,m,sum=1;
        scanf("%llu %llu",&n,&m);
        for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++){
            if(!(n%prime[i])){
                ull count=0;
                while(!(n%prime[i])){
                    n/=prime[i];
                    count++;
                }
                ull x=count*m+1;
                ull y=(bigMOD(prime[i],x)-1)%mod;
                ull z=mulInverse(prime[i]-1);
                sum=((sum%mod)*((y*z)%mod))%mod;
            }
        }
        if(n>2){
            if(!(n%mod))
                sum=1;
            else{
                ull x=(bigMOD(n,m+1)-1)%mod;
                ull y=mulInverse(n-1);
                sum=((sum%mod)*(x*y)%mod)%mod;
            }
        }
        printf("Case %d: %llu\n",cs++,sum);
    }
    return 0;
}