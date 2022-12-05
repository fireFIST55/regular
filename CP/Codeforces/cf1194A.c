#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long int answers[t],n,x;
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld",&n,&x);
        answers[i]=x*2;
    }
    for(i=0;i<t;i++)
    {
        printf("%ld\n",answers[i]);
    }
    return 0;
}
