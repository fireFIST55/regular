#include<stdio.h>
int main(void)
{
    int x,remainder;
    scanf("%d",&x);
    remainder=x%4;
    if(remainder==1)
    {
        printf("0 A\n");
    }
    else
    {
        if(remainder==2)
        {
            printf("1 B\n");
        }
        else if(remainder==3)
        {
            printf("2 A\n");
        }
        else
        {
            printf("1 A\n");
        }
    }
    return 0;
}
