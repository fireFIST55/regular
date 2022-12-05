#include<stdio.h>
int main(void)
{
    int i,a,n,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum1+=a;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum2+=a;
    }
    if(sum1>=sum2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
