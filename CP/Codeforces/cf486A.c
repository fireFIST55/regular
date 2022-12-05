#include<stdio.h>
int main(void)
{
    long long int n,i,total=0;
    scanf("%lld",&n);
    if(n>=1&&n<=1000000000000000)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                total+=i*(-1);
            }
            else
            {
                total+=i;
            }
        }
    printf("%d",total);
    }
    return 0;
}
