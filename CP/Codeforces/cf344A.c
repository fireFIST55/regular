#include<stdio.h>
int main(void)
{
    int n,i,total=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            total+=i*(-1);
        }
        else
        {
            total+=i;
        }
    }
    printf("%d",total);
    return 0;
}
