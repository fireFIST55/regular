#include<stdio.h>
int main(void)
{
    int i,n,count=1,max=0;
    scanf("%d",&n);
    long int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&array[i]);
        if(i>0)
        {
            if(array[i-1]<=array[i])
                count++;
            else
            {
                if(count>max)
                    max=count;
                count=1;
            }
        }
    }
    if(max<count)
        max=count;
    printf("%d",max);
    return 0;
}
