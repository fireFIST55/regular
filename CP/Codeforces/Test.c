#include<stdio.h>
int main(void)
{
    int n,i,max,min,count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
            count++;
        }
        else if(min>array[i])
        {
            min=array[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
