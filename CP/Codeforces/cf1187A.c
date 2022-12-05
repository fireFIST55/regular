#include<stdio.h>
int main(void)
{
    int i,T;
    scanf("%d",&T);
    long long int min,s,t,n;
    for(i=0;i<T;i++)
    {
        scanf("%lld %lld %lld",&n,&s,&t);
        if(s>=t&&t>=n)
            printf("%d\n",1);
        else if(s+t>=n)
        {
            min=s<t?s:t;
            printf("%lld\n",n-min+1);
        }
    }
    return 0;
}
