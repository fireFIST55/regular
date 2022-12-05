#include<stdio.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("-1\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                printf("%d ",i+1);
            }
            else
            {
                printf("%d ",i-1);
            }
        }
        printf("\n");
    }
    return 0;
}
