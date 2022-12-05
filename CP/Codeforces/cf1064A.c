#include<stdio.h>
int main(void)
{
    int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<=c)
    {
        count+=(c-a-b)+1;
    }
    else if(b+c<=a)
    {
        count+=(a-b-c)+1;
    }
    else if(a+c<=b)
    {
        count+=(b-a-c)+1;
    }
    printf("%d\n",count);
    return 0;
}
