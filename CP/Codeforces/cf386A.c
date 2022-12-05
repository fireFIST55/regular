#include<stdio.h>
int main(void)
{
    int i,j,n,max=0;
    scanf("%d",&n);
    int index,max2=0,array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(max<array[i])
        {
            max=array[i];
            index=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]<max&&max2<array[i])
            max2=array[i];
    }
    printf("%d %d\n",index+1,max2);
    return 0;
}
