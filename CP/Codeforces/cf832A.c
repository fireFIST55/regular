#include<stdio.h>
int main(void)
{
    long long int n,k,x;
    scanf("%lld %lld",&n,&k);
    x=n/k;
    if(x%2==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
