#include<stdio.h>
int main(void)
{
    int i,j,t,n,count,sum,array[100];
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,sum=0,count=0;j<n;j++)
        {
            scanf("%d",&array[j]);
            if(array[j]==0)
            {
                count++;
            }
            else
            {
                sum+=array[j];
            }
        }
        if(count>0)
        {
            sum+=count;
            if(sum==0)
            {
                answers[i]=count+1;
            }
            else
            {
                answers[i]=count;
            }
        }
        else if(sum!=0)
        {
            answers[i]=0;
        }
        else
        {
            answers[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
