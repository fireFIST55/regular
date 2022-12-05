#include<stdio.h>
int main(void)
{
    int i,n,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<0)
            sum+=(-1)*x;
        else
            sum+=x;
    }
    printf("%d\n",sum);
    return 0;
}
