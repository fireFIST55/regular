#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    long int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
        if(array[i]%2==0)
        {
            array[i]=array[i]-1;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%ld ",array[i]);
    }
    return 0;
}
