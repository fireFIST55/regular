#include<stdio.h>
int main(void)
{
    int a,b,c,x,y,z,rem;
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d %d %d",&a,&b,&c);
    if(a>=x)
    {
        a-=x;
    }
    else
    {
        printf("NO\n");
        return 0;
    }
    if(a+b>=y)
    {
        rem=a+b-y;
    }
    else
    {
        printf("NO\n");
        return 0;
    }
    if(rem+c>=z)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
        return 0;
    }
}
