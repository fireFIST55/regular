#include<stdio.h>
int if_max(int array[],int i,int x);
int if_min(int array[],int i,int x);
int main(void)
{
    int n,i,j,x,xmax,min,count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==1)
        {
            if(array[i]!=array[i-1])
            {
                count++;
            }
        }
        else if(i>1)
        {
            count=if_max(array,i,count);
            count=if_min(array,i,count);
        }
    }
    printf("%d",count);
    return 0;
}
int if_max(int array[],int i,int x)
{
    int m,n,max;
    max=array[0];
    for(n=1;n<=i;n++)
    {
        max=max>array[n]?max:array[n];
        if(max>array[i])
        {
            return x;
        }
        else if(max==array[i]&&n!=i)
        {
            return x;
        }
    }
    if(max==array[i])
    {
        return (x+1);
    }
}
int if_min(int array[],int i,int x)
{
    int m,n,min;
    min=array[0];
    for(n=1;n<=i;n++)
    {
        min=min<array[n]?min:array[n];
        if(min<array[i])
        {
            return x;
        }
        else if(n!=i&&min==array[i])
        {
            return x;
        }
    }
    if(min==array[i])
    {
        return (x+1);
    }
}
