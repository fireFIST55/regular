#include<stdio.h>
int main(void)
{
    int i,t,n,m;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        if(n==1||m==1)
        {
            answers[i]=1;
        }
        else if(n>2||m>2)
        {
            answers[i]=0;
        }
        else
        {
            answers[i]=1;
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
