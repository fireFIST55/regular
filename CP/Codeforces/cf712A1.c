#include<stdio.h>
int main(void)
{
    int i,j,k,l,n;
    scanf("%d",&n);
    long int array[n],answer[n],sum;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
        if(i>0)
            answer[i-1]=array[i-1]+array[i];
        if(i==n-1)
            answer[i]=array[i];
    }
    for(i=0;i<n;i++)
        printf("%ld ",answer[i]);
    return 0;
}
