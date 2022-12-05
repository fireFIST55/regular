#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    long int temp,array[n];
    for(i=0;i<n;i++)
        scanf("%ld",&array[i]);
    for(i=0;i<n&&i<=n-i-1;i+=2)
    {
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
        printf("%ld ",array[i]);
    printf("\n");
    return 0;
}
