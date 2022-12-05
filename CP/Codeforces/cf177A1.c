#include<stdio.h>
int main(void)
{
    int i,j,k,l,sum=0,n;
    scanf("%d",&n);
    int array[n][n];
    for(i=0,l=0,k=n-1;i<n;i++,l++,k--)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
            if(j==l||j==k)
                sum+=array[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i!=n/2)
        {
            sum+=array[n/2][i];
            sum+=array[i][n/2];
        }
    }
    printf("%d\n",sum);
    return 0;
}
