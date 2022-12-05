#include<stdio.h>
int main(void)
{
    int i,a,b,t;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        answers[i]=a+b;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
