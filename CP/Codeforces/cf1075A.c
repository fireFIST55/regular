#include<stdio.h>
int main(void)
{
    unsigned long long int n,x,y,dif_whiterow,dif_blackrow,dif_blackcol,dif_whitecol,moves1=0,moves2=0;
    scanf("%llu %llu %llu",&n,&x,&y);
    if(x!=1&&y!=1)
    {
        dif_whiterow=x-1;
        dif_whitecol=y-1;
        if(dif_whiterow<dif_whitecol)
            moves1=dif_whiterow;
        else
            moves1=dif_whitecol;
        if(x>y)
            moves1+=(x-y);
        else
            moves1+=(y-x);
    }
    else
    {
        if(1==x)
            moves1=y-1;
        else if(y==1)
            moves1=x-1;
    }
    if(x!=n&&y!=n)
    {
        dif_blackrow=n-x;
        dif_blackcol=n-y;
        if(dif_blackrow<dif_blackcol)
            moves2=dif_blackrow;
        else
            moves2=dif_blackcol;
        if(x>y)
            moves2+=(x-y);
        else
            moves2+=(y-x);
    }
    else
    {
        if(n==x)
            moves2=n-y;
        else if(y==n)
            moves2=n-x;
    }
    if(moves2<moves1)
        printf("Black\n");
    else
        printf("White\n");
    return 0;
}
