#include<stdio.h>
int main(void)
{
    int i,j,x,t,n,k1,k2,max,max1;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&n,&k1,&k2);
        for(j=0,max=0;j<k1;j++)
        {
            scanf("%d",&x);
            if(max<x)
            {
                max=x;
            }
        }
        for(j=0,max1=0;j<k2;j++)
        {
            scanf("%d",&x);
            if(max1<x)
            {
                max1=x;
            }
        }
        if(max>max1)
        {
            answers[i]=1;
        }
        else
        {
            answers[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
