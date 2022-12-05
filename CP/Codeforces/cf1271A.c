#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f;
    long int min1,min2,max,total;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if(e>f)
    {
        min1=a<d?a:d;
        total=min1*e;
        d-=min1;
        min2=b<c?b<d?b:d:c<d?c:d;
        total+=min2*f;
    }
    else
    {
        min2=b<c?b<d?b:d:c<d?c:d;
        total=min2*f;
        d-=min2;
        min1=a<d?a:d;
        total+=min1*e;
    }
    printf("%ld\n",total);
    return 0;
}
