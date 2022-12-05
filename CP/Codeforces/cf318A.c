#include<stdio.h>
int main(void)
{
    long long int n,k,odd;
    scanf("%lld %lld",&n,&k);
    if(n%2==0)
        odd=n/2;
    else
        odd=n/2+1;
    if(k<=odd)
        printf("%lld\n",k*2-1);
    else
        printf("%lld\n",(k-odd)*2);
    return 0;
}
