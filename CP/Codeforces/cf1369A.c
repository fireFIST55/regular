#include<stdio.h>
int main(void)
{
    int t,i,x;
    scanf("%d",&t);
    x=t;
    int answers[t];
    long int n;
    for(i=0;i<x;i++)
    {
        scanf("%lld",&n);
        if(n%4==0)
        {
            answers[i]=1;
        }
        else
        {
            answers[i]=0;
        }
    }
    for(i=0;i<x;i++)
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
}
