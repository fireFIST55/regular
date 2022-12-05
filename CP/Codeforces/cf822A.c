#include<stdio.h>
int main(void)
{
    int a,b,min,i,answer=1;
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=0;min>=1;i++,min--)
    {
        answer*=min;
    }
    printf("%d\n",answer);
    return 0;
}
