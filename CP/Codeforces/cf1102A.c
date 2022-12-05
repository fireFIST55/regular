#include<stdio.h>
int main(void)
{
    long int n,remainder;
    scanf("%ld",&n);
    remainder=n%4;
    if(remainder==1||remainder==2)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
