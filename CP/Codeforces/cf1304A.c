#include<stdio.h>
int main(void)
{
    int x,y,a,b,t,i;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&x,&y,&a,&b);
        if((y-x)%(a+b)==0)
        {
            answers[i]=(y-x)/(a+b);
        }
        else
        {
            answers[i]=-1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
