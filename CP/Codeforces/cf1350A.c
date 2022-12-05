#include<stdio.h>
int main(void)
{
    int i,j,l,t;
    scanf("%d",&t);
    long long int n,k,d,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);
        if(n%2==0)
            answer[i]=n+k*2;
        else
        {
            for(j=1;j<=k;j++)
            {
                d=n;
                for(l=2;l<=sqrt(n)+1;l++)
                {
                    if(n%l==0)
                    {
                        n=l+n;
                        break;
                    }
                }
                if(d==n)
                    n*=2;
                if(n%2==0)
                {
                    n+=(k-j)*2;
                    break;
                }
            }
            answer[i]=n;
        }
    }
    for(i=0;i<t;i++)
        printf("%lld\n",answer[i]);
    return 0;
}
