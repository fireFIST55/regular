#include<stdio.h>
int main(void)
{
    int i,j,n,count=0;
    long long int d;
    scanf("%d %lld",&n,&d);
    long long int array[n],min;
    for(i=0;i<n;i++)
        scanf("%lld",&array[i]);
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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]-array[i]<=d)
                count++;
            else
                break;
        }
    }
    printf("%d\n",count*2);
}
