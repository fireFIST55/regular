#include<stdio.h>
int main(void)
{
    int n,i,j,k,l=0,d=0,s,max;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0,j=n-1,k=0;i<=j;k++)
    {
        max=array[i]>array[j]?array[i]:array[j];
        if(max==array[i])
        {
            i++;
        }
        else
        {
            j--;
        }
        if(k%2==0)
        {
            l+=max;
        }
        else
        {
            d+=max;
        }
    }
    printf("%d %d\n",l,d);
    return 0;
}
