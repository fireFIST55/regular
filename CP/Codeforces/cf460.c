#include<stdio.h>
int main(void)
{
    int i,n,m,total,extra;
    scanf("%d %d",&n,&m);
    total=n;
    for(i=0;;i++)
    {
        extra=n/m;
        if(extra==0)
            break;
        if(n%m!=0&&n>m)
            n=extra+n%m;
        else
            n=extra;
        total+=extra;
    }
    printf("%d\n",total);
    return 0;
}
