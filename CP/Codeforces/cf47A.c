#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,x;
    scanf("%d",&n);
    x=sqrt(n*2);
    if((x*x+x)/2==n)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
