#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d %d\n",n+4,4);
    }
    else if(n%2!=0)
        printf("%d %d\n",n+9,9);
    return 0;
}
