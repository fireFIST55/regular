#include<stdio.h>
int main(void)
{
    int a,b,c,d,i,t,r,k,remainder,pen,pencil;
    scanf("%d",&t);
    int answers[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        if(a%c!=0)
        {
            pen=a/c+1;
        }
        else
            pen=a/c;
        if(b%d!=0)
        {
            pencil=b/d+1;
        }
        else
            pencil=b/d;
        if(pen+pencil<=k)
        {
            answers[i][0]=pen;
            answers[i][1]=pencil;
        }
        else
        {
            answers[i][0]=-1;
            answers[i][1]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i][0]==-1)
        {
            printf("%d\n",answers[i][0]);
        }
        else
            printf("%d %d\n",answers[i][0],answers[i][1]);
    }
}
