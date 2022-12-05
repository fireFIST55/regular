#include<stdio.h>
int main(void)
{
    int k,w,i;
    long long int n,total=0;
    scanf("%d %lld %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        total+=i*k;
    }
    total-n>0?printf("%lld",total-n):printf("0");
    return 0;
}
