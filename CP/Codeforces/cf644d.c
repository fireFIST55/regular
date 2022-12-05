#include<stdio.h>
int main(void)
{
    int i,j,l,x,t,limit;
    scanf("%d",&t);
    long long int array[t][2],num,n,k,answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&array[i][0],&array[i][1]);
    }
    for(i=0;i<t;i++)
    {
        n=array[i][0];
        k=array[i][1];
        if(k>=n)
            answers[i]=1;
        else if(k==1)
            answers[i]=n;
        else
        {
            if(n%2==0)
            {
                limit=n/2;
                num=2;
                l=1;
            }
            else
            {
                num=3;
                limit=31623;
                l=2;
            }
            for(x=0;num<=limit;num+=l)
            {
                if(n%num==0&&(n/num<=k))
                {
                    answers[i]=num;
                    x++;
                    break;
                }
            }
            if(x==0)
                answers[i]=n;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",answers[i]);
    }
    return 0;
}
