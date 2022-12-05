#include<stdio.h>
int main(void)
{
    long int a,b,c,d,max,min,mid,total=0;
    scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
    max=a>b?a>c?a:c:b>c?b:c;
    min=a<b?a<c?a:c:b<c?b:c;
    mid=a+b+c-max-min;
    if(max-mid<d)
    {
        total=d-max+mid;
    }
    if(mid-min<d)
    {
        total+=d-mid+min;
    }
    printf("%ld\n",total);
    return 0;
}
