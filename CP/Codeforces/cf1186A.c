#include<stdio.h>
int main(void)
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if(n>m||n>k)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
