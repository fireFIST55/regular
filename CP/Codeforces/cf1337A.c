#include<stdio.h>
int main(void)
{
    long int i,t,a,b,c,d;
    scanf("%d",&t);
    long int answers[t][3];
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        answers[i][0]=b;
        answers[i][1]=c;
        answers[i][2]=c;
    }
    for(i=0;i<t;i++)
    {
        printf("%d %d %d\n",answers[i][0],answers[i][1],answers[i][2]);
    }
    return 0;
}
