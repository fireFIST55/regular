#include<stdio.h>
int main(void)
{
    int i,t,x;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            answers[i]=x/2;
        }
        else if(x<=7)
        {
            answers[i]=1;
        }
        else
        {
            answers[i]=(x-5)/2+1;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
