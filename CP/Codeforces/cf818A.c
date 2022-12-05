#include<stdio.h>
int main(void)
{
    long long int n,k,winner,certi,diplo;
    scanf("%lld %lld",&n,&k);
    winner=n/2;
    diplo=winner/(k+1);
    certi=diplo*k;
    printf("%lld %lld %lld",diplo,certi,(n-diplo-certi));
    return 0;
}
