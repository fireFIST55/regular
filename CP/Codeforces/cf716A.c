#include<stdio.h>
int main(void)
{
    int i,n,count=0;
    long int c;
    scanf("%d %ld",&n,&c);
    long int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
        if(array[i]-array[i-1]<=c)
        {
            count++;
        }
        else
        {
            count=1;
        }
    }
    printf("%d",count);
    return 0;
}
