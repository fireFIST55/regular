#include<stdio.h>
int main(void)
{
    int t,i;
    scanf("%d",&t);
    long int x,answers[t][2];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&x);
        answers[i][0]=x-1;
        answers[i][1]=1;
    }
    for(i=0;i<t;i++)
    {
        printf("%ld %ld\n",answers[i][0],answers[i][1]);
    }
    return 0;
}
