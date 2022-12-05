#include<stdio.h>
int main(void)
{
    long int d1,d2,d3,a,b,c,d,min;
    scanf("%ld %ld %ld",&d1,&d2,&d3);
    a=d1*2+d2*2;
    b=d1+d2+d3;
    c=d3*2+d2*2;
    d=d1*2+d3*2;
    min=a<b?a<c?a<d?a:d:c<d?c:d:b<c?b<d?b:d:c<d?c:d;
    printf("%d\n",min);
    return 0;
}
