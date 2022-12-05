#include<stdio.h>
int main(void)
{
    int i,j,a,b,n;
    scanf("%d %d %d",&n,&a,&b);
    long long int array[n],min;
    for(i=0;i<n;i++)
        scanf("%lld",&array[i]);
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
    printf("%lld\n",array[b]-array[b-1]);
    return 0;
}
