#include<stdio.h>
int check(int a,int b,int c)
{
    int i;
    if(a+b>c&&b+c>a&&a+c>b)
        i=2;
    else if(a+b>=c&&b+c>=a&&a+c>=b)
        i=1;
    else
        i=0;
    return i;
}
int main(void)
{
    int a,b,c,d,x,ans,max;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=check(a,b,c);
    ans=x;
    x=check(a,b,d);
    if(ans<x)
        ans=x;
    x=check(b,c,d);
    if(ans<x)
        ans=x;
    x=check(a,c,d);
    if(ans<x)
        ans=x;
    if(ans==2)
        printf("TRIANGLE\n");
    else if(ans)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");
    return 0;
}
