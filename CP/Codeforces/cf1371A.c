#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long int n,answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        if(n%2!=0)
            answers[i]=n/2+1;
        else
            answers[i]=n/2;
    }
    for(i=0;i<t;i++)
        printf("%ld\n",answers[i]);
    return 0;
}
