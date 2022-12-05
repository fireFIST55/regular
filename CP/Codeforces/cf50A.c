#include<stdio.h>
int main(void)
{
    int M,N;
    scanf("%d %d",&M,&N);
    if(1<=M<=N<=16)
    {
        printf("%d",(M*N)/2);
    }
    return 0;
}
