#include<stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    int total=n/2;
    if(n%2==0)
    {
        printf("%d\n",total);
        for(i=0;i<total;i++)
        {
            printf("2 ");
        }
    }
    else
    {
        printf("%d\n",total);
        for(i=0;i<total;i++)
        {
            if(i==0)
            {
                printf("3 ");
            }
            else
            {
                printf("2 ");
            }
        }
    }
    return 0;
}
