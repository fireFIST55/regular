#include<stdio.h>
int main(void)
{
    int h,w,u1,d1,u2,d2,max,other,weight,other_w;
    scanf("%d %d %d %d %d %d",&w,&h,&u1,&d1,&u2,&d2);
    max=d1>d2?d1:d2;
    other=d1+d2-max;
    if(max==d1)
    {
        weight=u1;
        other_w=u2;
    }
    else
    {
        weight=u2;
        other_w=u1;
    }
    for(h;h>=max;h--)
        w+=h;
    if(w>=weight)
        w-=weight;
    else
        w=0;
    for(h;h>=other;h--)
        w+=h;
    if(w>=other_w)
        w-=other_w;
    else
        w=0;
    for(h;h>=0;h--)
        w+=h;
    printf("%d\n",w);
    return 0;
}
