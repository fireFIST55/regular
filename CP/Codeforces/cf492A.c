#include<stdio.h>
int main(void)
{
    int i,n,x=1;
    long int sum=0;
    scanf("%d",&n);
    for(i=1;i<=x;i++,x++)
    {
        sum+=(i*(i+1))/2;
        if(sum>n)
        {
            i--;
            printf("%d",i);
            return 0;
        }
    }
}
