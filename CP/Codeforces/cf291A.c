#include<stdio.h>
int main(void)
{
    int i,j,n,count=0;
    scanf("%d",&n);
    long long int array[n],min;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&array[i]);
    }
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
            if(array[i]==array[i+1])
            {
                if(array[i+2]==array[i])
                {
                    printf("%d\n",-1);
                    return 0;;
                }
                else
                    count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
