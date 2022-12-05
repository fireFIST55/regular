#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    long long int a,b,max=-1;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        max=max>(a+b)?max:(a+b);
    }
    printf("%lld\n",max);
    return 0;
}
