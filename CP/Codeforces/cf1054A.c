#include<stdio.h>
int main(void)
{
    int x,y,z,t1,t2,t3,min1,min2,max1,max2,lift,stairs;
    scanf("%d %d %d %d %d %d",&x,&y,&z,&t1,&t2,&t3);
    min1=x<y?x:y;
    min2=z<x?z:x;
    max1=x+y-min1;
    max2=z+x-min2;
    lift=(max2-min2)*t2+3*t3+(max1-min1)*t2;
    stairs=(max1-min1)*t1;
    if(lift<=stairs)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
