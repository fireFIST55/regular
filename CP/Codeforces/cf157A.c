#include<stdio.h>
int main(void)
{
    int i,j,x,k=0,l,n,sum,sum1,count=0;
    scanf("%d",&n);
    int array[n][n],row[n],col[n];
    for(i=0;i<n;i++)
    {
        for(j=0,sum=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
            sum+=array[i][j];
        }
        if(i==n-1)
        {
            for(j=0;j<n;j++)
            {
                for(l=0,sum1=0;l<n;l++)
                    sum1+=array[l][j];
                col[j]=sum1;
            }
        }
        row[k]=sum;
        k++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(col[j]>row[i])
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
