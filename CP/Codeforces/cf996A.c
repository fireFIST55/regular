#include<stdio.h>
int main(void)
{
    long int n,i,total=0;
    scanf("%ld",&n);
    for(i=0;n>0;i++)
    {
        if(n>=100)
        {
            total+=n/100;
            n-=100*(n/100);
        }
        else if(n>=20)
        {
            total+=n/20;
            n-=20*(n/20);
        }
        else if(n>=10)
        {
            total+=n/10;
            n-=10*(n/10);
        }
        else if(n>=5)
        {
            total+=n/5;
            n-=5*(n/5);
        }
        else if(n>=1)
        {
            total+=n/1;
            n-=n/1;
        }
    }
    printf("%ld",total);
    return 0;
}
