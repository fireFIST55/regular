#include<stdio.h>
int main(void)
{
    int i,count=0,x=0,n,k;
    scanf("%d %d",&n,&k);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]<=k&&x==0)
        {
            count++;
        }
        else
        {
            x++;
        }
    }
    if(count!=n&&count!=n-1)
    {
        for(i=n-1;i>=0;i--)
        {
            if(array[i]<=k)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
