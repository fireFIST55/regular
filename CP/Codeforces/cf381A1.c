#include<stdio.h>
int main(void)
{
    int n,max,i,j,s=0,d=0;
    scanf("%d",&n);
    int array[n];
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
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s+=array[i];
        }
        else
        {
            d+=array[i];
        }
    }
    printf("%d %d\n",s,d);
    return 0;
}
