#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int s,a,b,c,n,total,total1,answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        total1=s/c;
        total=total1+(total1/a)*b;
        answers[i]=total;
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",answers[i]);
    }
    return 0;
}
