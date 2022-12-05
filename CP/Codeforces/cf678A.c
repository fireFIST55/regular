#include<stdio.h>
int main(void)
{
    long long int n,k,by;
    scanf("%lld %lld",&n,&k);
    by=n/k;
    printf("%lld\n",k*(by+1));
    return 0;
}
