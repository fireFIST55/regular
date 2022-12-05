#include<stdio.h>
int main(void)
{
    int n,array[100][2],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if((array[i][1]-array[i][0])>=2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
