#include<stdio.h>
int main(void)
{
    int n,i,j,a,sum1=0,sum2=0,k=0,alice;
    scanf("%d",&n);
    int answers[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum1+=a;
        if(i==0)
        {
            alice=a;
            sum2+=a;
            answers[k]=i+1;
        }
        else if(a<=alice/2)
        {
            sum2+=a;
            answers[k+1]=i+1;
            k++;
        }
    }
    if(sum2>sum1/2)
    {
        printf("%d\n",k+1);
        for(i=0;i<=k;i++)
        {
            printf("%d ",answers[i]);
        }
    }
    else
        printf("%d\n",0);
    return 0;
}
