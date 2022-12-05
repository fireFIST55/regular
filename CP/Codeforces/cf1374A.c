#include<stdio.h>
int main(void)
{
    int remainder,i,t,x,y,n;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&n);
        remainder=n/x;
        if(remainder*x+y<=n)
        {
            answers[i]=remainder*x+y;
        }
        else
        {
            if(remainder-1>=0)
            {
                answers[i]=(remainder-1)*x+y;
            }
            else
                answers[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
