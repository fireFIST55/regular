#include<stdio.h>
int main(void)
{
    int i,n,count=1;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
