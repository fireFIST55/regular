#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int array[n],i,sum=0,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>0)
        {
            sum+=array[i];
        }
        else if(sum>0)
        {
            sum--;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
