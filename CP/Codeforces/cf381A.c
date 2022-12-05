#include<stdio.h>
int main(void)
{
    int n,max;
    scanf("%d",&n);
    int i,j,k,array[n],s=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0,j=n-1,k=0;i<n/2||j>=n/2;k++)
    {
        if(array[i]!=0&&array[j]!=0)
        {
            max=array[i]>array[j]?array[i]:array[j];
        }
        if(max==array[i])
        {
            array[i]=0;
            i++;
        }
        else
        {
            array[j]=0;
            j--;
        }
        printf("MAX:%d\tI:%d\tJ:%d\n",max,i,j);
        if(k%2==0)
        {
            s+=max;
        }
        else
        {
            d+=max;
        }
        if(i==n/2&&j==n/2)
        {
            break;
        }
    }
    printf("%d %d\n",s,d);
    return 0;
}
