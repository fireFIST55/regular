#include<stdio.h>
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    if(n%3==1)
        printf("%lld\n",n/3+1+(n-n/3-1)/2);
    else
        printf("%lld\n",n/3+(n-n/3)/2);
    return 0;
}
