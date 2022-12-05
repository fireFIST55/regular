#include<stdio.h>
int main(void)
{
    int i,n,count=0,pos=0,neg=0;
    scanf("%d",&n);
    long int a,b;
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a>0)
            pos++;
        else
            neg++;
    }
    if(pos<=1||neg<=1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
