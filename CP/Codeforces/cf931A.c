#include<stdio.h>
int main(void)
{
    int a,b,x,y,max,min,tiredness;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    min=a+b-max;
    if((max-min)%2!=0)
    {
        a=(max-min)/2;
        b=(max-min)/2+1;
    }
    else
    {
        a=(max-min)/2;
        b=a;
    }
    tiredness=(a*(a+1))/2;
    tiredness+=(b*(b+1))/2;
    printf("%d\n",tiredness);
    return 0;
}
