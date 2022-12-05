#include<stdio.h>
int main(void)
{
    int x,n,m,t;
    scanf("%d",&t);
    int i,j,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&n,&m);
        for(j=0;j<=x;j++)
        {
            if(x>20&&n>0)
            {
                x=x/2+10;
                n--;
            }
            else
            {
                x-=m*10;
                m=0;
            }
            if(n==0&&m==0)
                break;
        }
        if(x<=0)
            answer[i]=1;
        else
            answer[i]=0;
    }
    for(i=0;i<t;i++)
    {
        if(answer[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
