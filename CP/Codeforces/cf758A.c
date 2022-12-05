#include<stdio.h>
int main(void)
{
    int n,max,total=0;
    scanf("%d",&n);
    int array[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    for(i=1;i<n;i++)
    {
        max=max>array[i]?max:array[i];
    }
    for(i=0;i<n;i++)
    {
        total+=max-array[i];
    }
    printf("%d",total);
    return 0;
}
