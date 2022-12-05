#include<stdio.h>
int main(void)
{
    int max,min,n;
    scanf("%d",&n);
    if(!(n%7))
        printf("%d %d\n",(n/7)*2,(n/7)*2);
    else
    {
        if(n%7>2)
            max=(n/7)*2+2;
        else
            max=(n/7)*2+n%7;
        if(n%7<=5)
            min=(n/7)*2;
        else
            min=(n/7)*2+1;
        printf("%d %d\n",min,max);
    }
    return 0;
}
