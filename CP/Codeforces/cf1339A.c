#include<stdio.h>
int main(void)
{
    int i,j,t;
    scanf("%d",&t);
    long int n,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        answer[i]=n;
    }
    for(i=0;i<t;i++)
        printf("%ld\n",answer[i]);
    return 0;
}
