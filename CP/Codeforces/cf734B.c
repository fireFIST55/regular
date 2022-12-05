#include<stdio.h>
int main(void)
{
    int k2,k3,k5,k6,min,sum;
    scanf("%d %d %d %d",&k2,&k3,&k5,&k6);
    min=k2<k5?k2<k6?k2:k6:k5<k6?k5:k6;
    sum=min*256;
    k2-=min;
    min=k2<k3?k2:k3;
    sum+=min*32;
    printf("%d",sum);
    return 0;
}
