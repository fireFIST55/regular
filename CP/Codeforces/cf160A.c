#include<stdio.h>
int main(void)
{
    int i,j,n;
    scanf("%d",&n);
    int max,total=0,sum=0,array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    for(i=0;i<n-1;i++)
    {
        max=array[i];
        for(j=i+1;j<n;j++)
            max=max<array[j]?array[j]:max;
        for(j=i+1;j<n;j++)
        {
            if(max==array[j])
            {
                array[j]=array[i];
                array[i]=max;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        total+=array[i];
        if(total>sum/2)
            break;
    }
    printf("%d",i+1);
    return 0;
}
