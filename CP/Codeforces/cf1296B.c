#include<stdio.h>
int main(void)
{
    int i,j,t;
    scanf("%d",&t);
    long long int n,total,answer[t],extra;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n<10)
            answer[i]=n;
        else
        {
            for(j=0,total=0;;j++)
            {
                total+=(n/10)*10;
                if(n%10!=0)
                    extra=n%10+n/10;
                else
                    extra=n/10;
                if(n/10==0)
                {
                    total+=extra;
                    break;
                }
                else
                    n=extra;
            }
            answer[i]=total;
        }
    }
    for(i=0;i<t;i++)
        printf("%lld\n",answer[i]);
}
