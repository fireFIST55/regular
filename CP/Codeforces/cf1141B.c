#include<stdio.h>
int main(void)
{
    int i,j,n,max=0,count=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i])
            count++;
        else
        {
            max=max<count?count:max;
            count=0;
        }
    }
    if(array[i-1])
    {
        i=0;
        while(array[i])
            i++;
        count+=i;
        max=max<count?count:max;
    }
    printf("%d\n",max);
    return 0;
}
