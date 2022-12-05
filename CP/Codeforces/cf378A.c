#include<stdio.h>
int main(void)
{
    int i,a,b,max,min,dif1,dif2,first=0,second=0,draw=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=6;i++)
    {
        max=i>a?i:a;
        min=i<a?i:a;
        dif1=max-min;
        max=i>b?i:b;
        min=i<b?i:b;
        dif2=max-min;
        if(dif1<dif2)
        {
            first++;
        }
        else if(dif2<dif1)
        {
            second++;
        }
        else
        {
            draw++;
        }
    }
    printf("%d %d %d\n",first,draw,second);
    return 0;
}
