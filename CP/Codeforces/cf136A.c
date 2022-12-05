#include<stdio.h>
int main(void)
{
    int array[100],i,k,n,dummy[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        k=array[i];
        dummy[k-1]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",dummy[i]);
    }
    return 0;
}
