#include<stdio.h>
int main(void)
{
    long int x1,y1,x2,y2,max1,a,b;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    max1=x1>x2?x1:x2;
    a=max1-(x1+x2-max1);
    max1=y1>y2?y1:y2;
    b=max1-(y1+y2-max1);
    max1=a>b?a:b;
    printf("%d\n",max1);
}
