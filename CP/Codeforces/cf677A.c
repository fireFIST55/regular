#include<stdio.h>
int main(void)
{
    int array[1000],i,n,h,count=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>h)
        {
            count+=2;
        }
        else
        {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
