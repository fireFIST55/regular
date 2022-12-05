#include<stdio.h>
int main(void)
{
    long int n,k,a,b,c,min;
    scanf("%ld %ld",&n,&k);
    a=(n*2);
    b=(n*5);
    c=(n*8);
    if(a%k!=0)
    {
        a=a/k+1;
    }
    else
        a/=k;
    if(b%k!=0)
    {
        b=b/k+1;
    }
    else
        b/=k;
    if(c%k!=0)
    {
        c=c/k+1;
    }
    else
        c/=k;
    printf("%ld\n",a+b+c);
    return 0;
}
