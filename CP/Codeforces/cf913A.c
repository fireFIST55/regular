#include<stdio.h>
int main(void)
{
    int i;
    long long int temp=1,n,m;
    scanf("%lld %lld",&n,&m);
    if(n>52)
        printf("%lld\n",m);
    else
    {
        for(i=0;i<n;i++)
            temp*=2;
        printf("%lld\n",m%temp);
    }
    return 0;
}
