#include<stdio.h>
int main(void)
{
    long int n;
    scanf("%ld",&n);
    if(n%10>5)
        printf("%ld\n",n+(10-n%10));
    else
        printf("%ld\n",(n/10)*10);
    return 0;
}
