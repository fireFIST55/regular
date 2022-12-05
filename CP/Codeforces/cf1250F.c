#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n;
    scanf("%d",&n);
    for(i=sqrt(n);i>=1;i--)
    {
        if(n%i==0)
            break;
    }
    printf("%d\n",(n/i+i)*2);
    return 0;
}
