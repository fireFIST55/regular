#include<stdio.h>
int main(void)
{
    int i,q,n;
    scanf("%d",&q);
    int answers[q];
    for(i=0;i<q;i++)
    {
        scanf("%d",&n);
        if(n==2)
        {
            answers[i]=2;
        }
        else if(n%2==0)
        {
            answers[i]=0;
        }
        else
        {
            answers[i]=1;
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
