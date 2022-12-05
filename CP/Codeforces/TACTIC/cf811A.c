#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int a,b,n;
    scanf("%lld %lld",&a,&b);
    n=sqrt(a);
    if((n*(n+1))<=b)
        printf("Vladik\n");
    else
        printf("Valera\n");
    return 0;
}
