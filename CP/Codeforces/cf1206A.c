#include<stdio.h>
int main(void)
{
    int i,j,max=0,max1=0,n,m;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(max<array[i])
        {
            max=array[i];
        }
    }
    scanf("%d",&m);
    int array1[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&array1[i]);
        if(max1<array1[i])
        {
            max1=array1[i];
        }
    }
    printf("%d %d\n",max,max1);
    return 0;
}
