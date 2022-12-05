#include<bits/stdc++.h>
#define LL unsigned long long
#define pb push_back
using namespace std;
#define Max 100005
#define mod 1000000007
char  prime[Max+1];
vector<LL >p;
LL  i,j,n,M,s,cnt,m,t;

// Function to return gcd of a and b
LL  gcd(LL  a, LL  b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


// To compute x^y under modulo m
LL  power(LL  x,  LL  y,  LL  m)
{
    if (y == 0)
        return 1;
    LL  p = power(x, y/2, m) % m;
    p = (p * p) % m;

    return (y%2 == 0)? p : (x * p) % m;
}

LL  modInverse(LL  a, LL  m)
{
    LL  g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        // If a and m are relatively prime, then modulo inverse
        // is a^(m-2) mode m
        return  power(a, m-2, m);
    }
}


void sieve()
{
    LL  i,j,x;
    for(i=0;i<=Max;i++)
        prime[i]=0;
    prime[0]=prime[1]=1;
    for(i=4;i<=Max;i+=2)
        prime[i]=1;
    x=sqrt(Max);
    for(i=3; i<=x; i+=2){
        for(j=i*i;j<=Max;j+=i)
            prime[j]=1;
    }
}

LL  F(LL  N,LL  P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		LL  ret=F(N,P/2);
		return ((ret%mod)*(ret%mod))% mod;
	}
	else return ((N%mod)*(F(N,P-1)%mod))%mod;
}

main()
{
    sieve();
    for(LL  i=1;i<Max;i++){
        if(prime[i]==0) p.pb(i);
    }

    cin>>t;
    for(LL  tt=1;tt<=t;tt++){
    scanf("%lld %lld",&n,&M);
    LL  nn = n;
    LL  sum = 1,ck = 0;
    for(LL  i=0;i<p.size();i++){
        if(p[i]<=nn){
            if(n%p[i]==0){
                cnt=0;
                while(n%p[i]==0){
                    n/=p[i];
                    cnt++;
                }

                LL  pod = cnt*M + 1;

                LL  lob = ( F(p[i],pod) - 1)%mod ;

                LL  hor = modInverse(p[i]-1,mod);

                s = (( lob%mod) * (hor%mod )) % mod;

                sum =  ( (sum%mod)*(s%mod )) % mod;
            }
        }
    }

    if(n>2){

        LL pod = M+1,lob;

        if(n%mod==0) {
            sum = 1;
        }
        else{
        lob = ( F(n,pod) - 1)%mod;
        LL  hor = modInverse(n-1,mod);
        s = (( lob) * (hor )) % mod;
        sum =  ( (sum%mod)*(s%mod)) % mod;
        }
    }

    printf("Case %lld: %lld\n",tt,sum);

    }

}
