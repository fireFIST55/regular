#include<stdio.h>
int main(void)
{
    int i,n,s,max=0,a,sum=0;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
        if(max<a)
            max=a;
    }
    sum-=max;
    if(sum<=s)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
