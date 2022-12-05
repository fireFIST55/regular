#include<stdio.h>
int main(void)
{
    long long int n,k,count=0;
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&k);
        count=0;
        while(n)
        {
            if(!(n%k))
            {
                n=n/k;
                count+=1;
            }
            else
            {
                count+=(n%k);
                n-=(n%k);
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
