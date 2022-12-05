#include<stdio.h>
int main(void)
{
    long int n;
    int i=1;
    scanf("%ld",&n);
    if((n-2)%3==0)
    {
        n-=3;
        i++;
    }
    else
    {
        n-=2;
    }
    printf("%d %d %ld\n",1,i,n);
    return 0;
}
