#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    int array[n][n];
    for(i=0;i<n;i++)
    {
        array[0][i]=1;
        array[i][0]=1;
    }
    for(i=1;i<n;i++)
    {
        array[i][1]=i+1;
        array[1][i+1]=i+2;
    }
    if(n>2)
    {
        for(i=2;i<n;i++)
        {
            for(j=2;j<n;j++)
            {
                array[i][j]=array[i-1][j]+array[i][j-1];
            }
        }
    }
    printf("%d",array[n-1][n-1]);
    return 0;
}
