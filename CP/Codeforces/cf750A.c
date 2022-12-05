#include<stdio.h>
int main(void)
{
    int n,k,total=0,time,x=0,i=1;
    scanf("%d %d",&n,&k);
    time=240-k;
    if(time>=5)
    {
        for(i=1;(x+5*i)<=time&&i<=n;i++)
        {
            x+=5*i;
        }
    }
    printf("%d",i-1);
    return 0;
}
