#include<stdio.h>
int main(void)
{
    long long int yellow,blue,total,a,b,x,y,z;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&x,&y,&z);
    yellow=2*x+y*1;
    blue=y*1+3*z;
    if(yellow>=a)
        total=(yellow-a);
    else
        total=0;
    if(blue>=b)
        total+=(blue-b);
    else
        total+=0;
    printf("%lld\n",total);
    return 0;
}
