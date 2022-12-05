#include<stdio.h>
#include<math.h>
int main(void)
{
    int m,n,a,b,count=0;
    scanf("%d %d",&n,&m);
    a=m>n?m:n;
    b=m+n-a;
    for(b=0;b<=m;b++)
    {
        a=m-b*b;
        if(a*a+b==n&&a>=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}

