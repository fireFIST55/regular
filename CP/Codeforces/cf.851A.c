#include<stdio.h>
int main(void)
{
    long long int n,k,t;
    scanf("%lld %lld %lld",&n,&k,&t);
    if(t>=(n+k))
        t%=(n+k);
    if(t<=k)
        printf("%lld\n",t);
    else if(t>k&&t<=n)
        printf("%lld\n",k);
    else if(t<(n+k)&&t>n)
        printf("%lld\n",((n+k)-t));
    return 0;
}
