#include<stdio.h>
int main(void)
{
    int i,j,min,n;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        min=array[i];
        for(j=i+1;j<n;j++)
        {
            min=min<array[j]?min:array[j];
        }
        for(j=i+1;j<n;j++)
        {
            if(min==array[j])
            {
                array[j]=array[i];
                array[i]=min;
                break;
            }
        }
    }
    if(n%2==0)
    {
        printf("%d\n",array[n/2-1]);
    }
    else
        printf("%d\n",array[n/2]);
    return 0;
}
