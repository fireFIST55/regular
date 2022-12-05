#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int x,y;
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&x,&y);
        if(x-y>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
