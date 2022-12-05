#include<stdio.h>
int main(void)
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    x=a>b?b:a;
    y=a>b?a:b;
    printf("%d %d",x,(y-x)/2);
    return 0;
}
