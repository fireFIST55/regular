#include<stdio.h>
int main(void)
{
    int i,j,n,m,t,sum,array[1000];
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        for(j=0,sum=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            sum+=array[j];
        }
        if(sum>=m)
        {
            answers[i]=m;
        }
        else
        {
            answers[i]=sum;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
