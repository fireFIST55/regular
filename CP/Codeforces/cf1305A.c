#include<stdio.h>
int main(void)
{
    int i,j,k,min,t,n;
    scanf("%d",&t);
    int array[t][100],array1[t][100],series[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        series[i]=n;
        for(j=0;j<n;j++)
            scanf("%d",&array[i][j]);
        for(j=0;j<n-1;j++)
        {
            min=array[i][j];
            for(k=j+1;k<n;k++)
                min=min<array[i][k]?min:array[i][k];
            for(k=j+1;k<n;k++)
            {
                if(min==array[i][k])
                {
                    array[i][k]=array[i][j];
                    array[i][j]=min;
                    break;
                }
            }
        }
        for(j=0;j<n;j++)
            scanf("%d",&array1[i][j]);
        for(j=0;j<n-1;j++)
        {
            min=array1[i][j];
            for(k=j+1;k<n;k++)
                min=min<array1[i][k]?min:array1[i][k];
            for(k=j+1;k<n;k++)
            {
                if(min==array1[i][k])
                {
                    array1[i][k]=array1[i][j];
                    array1[i][j]=min;
                    break;
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<series[i];j++)
            printf("%d ",array[i][j]);
        printf("\n");
        for(j=0;j<series[i];j++)
            printf("%d ",array1[i][j]);
        printf("\n");
    }
    return 0;
}
