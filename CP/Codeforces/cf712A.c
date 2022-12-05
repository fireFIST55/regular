#include<stdio.h>
int main(void)
{
    int i,j,k,l,n;
    scanf("%d",&n);
    long int array[n],answer[n],sum;
    for(i=0;i<n;i++)
        scanf("%ld",&array[i]);
    for(i=n-1;i>=0;i--)
    {
        sum=array[i];
        for(j=i+1,k=0;j<n;j++,k++)
        {
            if(k%2==0)
                sum+=answer[j];
            else
                sum-=answer[j];
        }
        answer[i]=sum;
    }
    for(i=0;i<n;i++)
        printf("%ld ",answer[i]);
    return 0;
}
