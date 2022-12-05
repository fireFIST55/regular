#include<stdio.h>
int main(void)
{
    int i,j,n,count,dif;
    scanf("%d",&n);
    long int array[n],min;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=array[i];
        for(j=i+1;j<n;j++)
        {
            min=min<array[j]?min:array[j];
        }
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
    for(i=1,count=0;i<n;i++)
    {
        dif=(array[i]-array[i-1])-1;
        if(dif>0)
        {
            count+=dif;
        }
    }
    printf("%d\n",count);
    return 0;
}
