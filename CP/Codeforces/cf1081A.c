#include<stdio.h>
int main(void)
{
    long int v;
    scanf("%ld",&v);
    if(v<=2)
        printf("%ld",v);
    else
    {
        printf("%d\n",1);
    }
    return 0;
}
