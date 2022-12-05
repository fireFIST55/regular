#include<stdio.h>
int main(void)
{
    int i,t,m,n;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        if(m%n==0)
        {
            answers[i]=1;
        }
        else
        {
            answers[i]=0;
        }
    }
    for(i=0;i<t;i++)
    {
        if(answers[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
