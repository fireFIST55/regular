#include<stdio.h>
int main(void)
{
    int n,array[100],i;
    float total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        total+=array[i];
    }
    printf("%f",total/n);
    return 0;
}
