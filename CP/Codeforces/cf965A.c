#include<stdio.h>
int main(void)
{
    unsigned long long int k,n,s,p,total;
    scanf("%llu %llu %llu %llu",&k,&n,&s,&p);
    if(n%s==0)
        total=(n/s)*k;
    else
        total=(n/s+1)*k;
    if(total%p==0)
        total=total/p;
    else
        total=total/p+1;
    printf("%llu\n",total);
    return 0;
}
