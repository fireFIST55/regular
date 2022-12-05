#include<stdio.h>
int main(void)
{
    int i,n,d,x,total;
    scanf("%d %d",&n,&d);
    total=(n-1)*10;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        total+=x;
    }
    if(total<=d)
        printf("%d\n",(d-(total-(n-1)*10))/5);
    else
        printf("%d\n",-1);
    return 0;
}
