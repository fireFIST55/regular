#include<stdio.h>
int main(void)
{
    long long int n;
    int k,i,temp;
    scanf("%lld %d",&n,&k);
    for(i=0;i<k;i++)
    {
        if(n%10==0&&n>9)
        {
            n/=10;
        }
        else if(n%10!=0)
        {
            n-=1;
        }
    }
    printf("%d",n);
    return 0;
}
