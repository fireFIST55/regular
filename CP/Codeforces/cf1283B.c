#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int n,k;
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);
        if((n-(n/k)*k)>=k/2)
            printf("%lld\n",(n/k)*k+k/2);
        else
            printf("%lld\n",(n/k)*k+(n-(n/k)*k));
    }
    return 0;
}
