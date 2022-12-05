#include<stdio.h>
int main(void)
{
    int n,m,min;
    scanf("%d %d",&n,&m);
    min=n<m?n:m;
    if(min%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");
    return 0;
}
