#include<stdio.h>
int main(void)
{
    int t,i,n;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        answers[i]=n/2;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
