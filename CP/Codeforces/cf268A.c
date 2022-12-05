#include<stdio.h>
int main(void)
{
    int n,count=0;
    scanf("%d",&n);
    int array[n][2],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i][0]==array[j][1])
            {
                count++;
            }
            if(array[i][1]==array[j][0])
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
