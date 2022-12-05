#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x==1)
    {
        printf("-1");
    }
    else
    {
        if(x%2==0)
        {
            printf("%d 2\n",x);
        }
        else
            printf("%d 2\n",x-1);
    }
    return 0;
}
