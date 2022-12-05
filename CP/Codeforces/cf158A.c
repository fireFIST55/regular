#include<stdio.h>
int main(void)
{
    int n,k,i,j=0,array[100];
    scanf("%d %d",&n,&k);
    if(1<=k<=n<=50)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>=array[k-1]&&array[i]>0)
        {
            j++;
        }
    }
    printf("%d\n",j);
    return 0;
}
