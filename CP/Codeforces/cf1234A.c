#include<stdio.h>
int main(void)
{
    int i,j,q,sum,n,x;
    scanf("%d",&q);
    int answers[q];
    for(i=0;i<q;i++)
    {
        scanf("%d",&n);
        for(j=0,sum=0;j<n;j++)
        {
            scanf("%d",&x);
            sum+=x;
        }
        if(sum%n==0)
        {
            answers[i]=sum/n;
        }
        else
        {
            answers[i]=(sum/n)+1;
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
