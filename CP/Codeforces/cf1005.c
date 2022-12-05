#include<stdio.h>
int main(void)
{
    int i,k,n,max=0;
    scanf("%d",&n);
    int array[n],stairs[n],count=0;
    for(i=0,k=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]==1)
        {
            count++;
            if(i>0)
            {
                stairs[k]=array[i-1];
                k++;
            }
        }
        if(i==n-1)
        {
            stairs[k]=array[i];
        }
    }
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        printf("%d ",stairs[i]);
    }
    return 0;
}
