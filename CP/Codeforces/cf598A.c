#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    double x;
    long long int n,y,temp,sum;
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%lld",&n);
        sum=(n*(n+1))/2;
        x=(log(n))/(log(2));
        y=x;
        temp=pow(2,y);
        sum-=((temp+(temp-2)+1)*2);
        printf("%lld\n",sum);
    }
    return 0;
}
