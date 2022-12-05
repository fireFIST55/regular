#include<stdio.h>
int main(void)
{
    int i,t,b,p,f,h,c,bun,min1,min2;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&b,&p,&f);
        scanf("%d %d",&h,&c);
        if(h>c)
        {
            bun=b/2;
            min1=bun<p?bun:p;
            b-=min1*2;
            min2=b/2<f?b/2:f;
            answers[i]=min1*h+min2*c;
        }
        else
        {
            bun=b/2;
            min1=bun<f?bun:f;
            b-=min1*2;
            min2=b/2<p?b/2:p;
            answers[i]=min1*c+min2*h;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}

