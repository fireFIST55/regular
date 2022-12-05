#include<stdio.h>
int main(void)
{
    int i,j,t,a,b,x,y,x1,x2,x3,x4,max;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if(x==0&y==0)
        {
            x1=(a-1)*b;
            x2=(b-1)*a;
            max=x1>x2?x1:x2;
            answers[i]=max;
        }
        else
        {
            x1=(a-(x+1))*b;
            x2=x*b;
            x3=a*(b-(y+1));
            x4=a*y;
            max=x1>x2?x1>x3?x1>x4?x1:x4:x3>x4?x3:x4:x2>x3?x2>x4?x2:x4:x3>x4?x3:x4;
            answers[i]=max;
        }
    }
    for(i=0;i<t;i++)
        printf("%d\n",answers[i]);
    return 0;
}
