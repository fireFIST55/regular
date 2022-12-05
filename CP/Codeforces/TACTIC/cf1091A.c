#include<stdio.h>
int main(void)
{
    int y,b,r,min;
    scanf("%d %d %d",&y,&b,&r);
    b-=1;
    r-=2;
    min=y<b?y<r?y:r:b<r?b:r;
    printf("%d\n",min+min+1+min+2);
    return 0;
}
