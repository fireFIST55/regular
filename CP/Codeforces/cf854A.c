#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("%d %d\n",n/2,n/2+1);
    else
    {
        if((n/2)%2==0)
            printf("%d %d\n",n/2-1,n/2+1);
        else
            printf("%d %d\n",n/2-2,n/2+2);
    }
    return 0;
}
