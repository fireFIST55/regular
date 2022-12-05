#include<stdio.h>
int main(void)
{
    long long int a,b,c,total,min;
    scanf("%lld %lld %lld",&a,&b,&c);
    min=a<b?a:b;
    if(a>min||b>min)
        printf("%lld\n",min*2+c*2+1);
    else
        printf("%lld\n",min*2+c*2);
    return 0;
}
