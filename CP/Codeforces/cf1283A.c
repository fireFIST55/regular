#include<stdio.h>
int main(void)
{
    int i,t,h,m,total;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&h,&m);
        if(m>0)
        {
            answers[i]=(24-h-1)*60+(60-m);
        }
        else
        {
            answers[i]=(24-h)*60;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
