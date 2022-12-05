#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long int n,m;
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&n,&m);
        if(n==1)
        {
            answers[i]=0;
        }
        else if(n==2)
        {
            answers[i]=m;
        }
        else
        {
            answers[i]=m*2;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%ld\n",answers[i]);
    }
    return 0;
}
