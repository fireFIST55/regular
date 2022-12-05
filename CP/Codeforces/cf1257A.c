#include<stdio.h>
int main(void)
{
    int n,x,a,b,i,t,dif,min,max;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&n,&x,&a,&b);
        min=a<b?a:b;
        max=a>b?a:b;
        dif=min-1+n-max;
        if(x>=n-2||x>=dif)
        {
            answers[i]=n-1;
        }
        else
        {
            answers[i]=(max-min)+x;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
