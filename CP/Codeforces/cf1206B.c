#include<stdio.h>
int main(void)
{
    int i,n,zero=0,neg=0;
    scanf("%d",&n);
    long long int array[n],coins=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&array[i]);
        if(array[i]>0)
            coins+=array[i]-1;
        else if(array[i]<0)
        {
            neg++;
            coins+=(-1-array[i]);
        }
        else
            zero++;
    }
    if(zero>=neg)
        coins+=zero;
    else
    {
        if(neg%2==0)
            coins+=zero;
        else if(zero<1)
            coins+=2;
        else
            coins+=zero;
    }
    printf("%lld",coins);
    return 0;
}
