#include<stdio.h>
int main(void)
{
    int i,j,max,sum=0,n,m,count=0;
    scanf("%d %d",&n,&m);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    {
        max=array[i];
        for(j=i+1;j<n;j++)
            max=max>array[j]?max:array[j];
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
    for(i=0;i<n;i++)
    {
        sum+=array[i];
        if(sum>=m)
            break;
    }
    printf("%d\n",i+1);
    return 0;
}
