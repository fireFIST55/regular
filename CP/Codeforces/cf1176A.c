#include<stdio.h>
int main(void)
{
    int i,j,q;
    scanf("%d",&q);
    float x=2/3;
    long long int answers[q],n,array[q],k=0;
    for(i=0;i<q;i++)
    {
        scanf("%lld",&array[i]);
    }
    for(i=0;i<q;i++)
    {
        n=array[i];
        if(n%7==0&&n%3!=0)
        {
            answers[i]=-1;
        }
        else if(n==1)
        {
            answers[i]=0;
        }
        else
        {
            for(j=0,k=0;;j++)
            {
                if(n%5==0)
                {
                    n=(4*n)/5;
                    k++;
                }
                else if(n%3==0)
                {
                    n=(2*n)/3;
                    k++;
                }
                else if(n%2==0)
                {
                    n=(n/2);
                    k++;
                }
                else
                {
                    k=-1;
                    break;
                }
                if(n==1)
                {
                    break;
                }
            }
            answers[i]=k;
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%lld\n",answers[i]);
    }
    return 0;
}
