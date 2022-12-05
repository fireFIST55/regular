#include<stdio.h>
int main(void)
{
    int t,i,n,m;
    scanf("%d",&t);
    int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        if(m%2!=0&&n%2!=0)
        {
            answers[i]=(((m/2.0)*n)+1);
        }
        else
        {
            answers[i]=(m/2.0)*n;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",answers[i]);
    }
    return 0;
}
