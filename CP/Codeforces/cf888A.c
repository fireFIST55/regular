#include<stdio.h>
int main(void)
{
    int i,n,count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=1;i<n-1;i++)
    {
        if(array[i]>array[i-1]&&array[i]>array[i+1])
            count++;
        else if(array[i]<array[i-1]&&array[i]<array[i+1])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
