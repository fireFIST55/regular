#include<stdio.h>
int main(void)
{
    int i,j=0,n;
    scanf("%d",&n);
    int max1,max=0,base,need=0,sum=0,array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum+=array[i];
        if(max<array[i])
            max=array[i];
    }
    if((sum*2+1)%n!=0)
        base=(2*sum+1)/n+1;
    else
        base=(2*sum+1)/n;
    max1=max>base?max:base;
    while(need<=sum)
    {
        max1+=j;
        for(i=0,need=0;i<n;i++)
        {
            need+=(max1-array[i]);
        }
        j++;
    }
    if(j>1)
        max1-=1;
    printf("%d\n",max1);
    return 0;
}
