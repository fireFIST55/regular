#include<stdio.h>
int main(void)
{
    long long int a,b,c,num;
    int i,count=0,n;
    scanf("%lld %lld %lld",&a,&b,&c);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num);
        if(num>b&&num<c)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
