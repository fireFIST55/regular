#include<stdio.h>
int main(void)
{
    int i,k=1,n;
    scanf("%d",&n);
    long long int x,min,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if(x%2!=0)
        {
            if(k)
            {
                min=x;
                k=0;
            }
            else
                min=min>x?x:min;
        }
        sum+=x;
    }
    if(!(sum&1))
        printf("%lld\n",sum);
    else
        printf("%lld\n",sum-min);
    return 0;
}
