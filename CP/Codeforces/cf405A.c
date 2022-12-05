#include<stdio.h>
int main(void)
{
    int i,j,n,min;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    {
        min=array[i];
        for(j=i+1;j<n;j++)
            min=min<array[j]?min:array[j];
        for(j=i+1;j<n;j++)
        {
            if(array[j]==min)
            {
                array[j]=array[i];
                array[i]=min;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",array[i]);
    return 0;
}
