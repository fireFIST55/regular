#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long int n;
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        printf("%ld\n",n/2+1);
    }
    return 0;
}
