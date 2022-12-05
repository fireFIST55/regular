#include<stdio.h>
int main(void)
{
    long int n,s,remainder;
    scanf("%ld %ld",&n,&s);
    if(s%n==0)
    {
        printf("%ld\n",s/n);
    }
    else
    {
        printf("%ld\n",(s/n)+1);
    }
    return 0;
}
