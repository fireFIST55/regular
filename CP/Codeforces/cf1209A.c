#include<stdio.h>
int main(void)
{
    int n,count=0;
    scanf("%d",&n);
    int i,j,min,array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    {
        min=array[i];
        for(j=i+1;j<n;j++)
            min=min<array[j]?min:array[j];
        for(j=i+1;j<n;j++)
        {
            if(array[j]==min)
            {
                array[j]=array[i];
                array[i]=min;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]>0)
        {
            for(j=i+1;j<n;j++)
            {
                if(array[j]>0)
                {
                    if(array[j]%array[i]==0)
                    {
                        array[j]=0;
                    }
                }
            }
            array[i]=0;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
