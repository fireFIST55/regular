#include<stdio.h>
int main(void)
{
    int n,count=0;
    scanf("%d",&n);
    int i,j,max,array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        max=array[i];
        for(j=i+1;j<n;j++)
        {
            max=max>array[j]?max:array[j];
        }
        for(j=i+1;j<n;j++)
        {
            if(array[j]==max)
            {
                array[j]=array[i];
                array[i]=max;
                break;
            }
        }
    }
    for(i=0;i<n;i+=2)
    {
        if(array[i]!=array[i+1])
        {
            count+=array[i]-array[i+1];
        }
    }
    printf("%d\n",count);
    return 0;
}
