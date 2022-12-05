#include<stdio.h>
int main(void)
{
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    b/=2;
    c/=4;
    min=a<b?a<c?a:c:b<c?b:c;
    printf("%d\n",7*min);
    return 0;
}
