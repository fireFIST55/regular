#include<stdio.h>
int main(void)
{
    int i,j,k,t;
    scanf("%d",&t);
    long int a,answer[t];
    for(i=0;i<t;i++)
    {
        scanf("%ld",&a);
        for(j=3,k=4;j<=a;j+=k,k*=2)
        {
            if(a%j==0)
                break;
        }
        if(j>a)
            answer[i]=a;
        else
            answer[i]=a/j;
    }
    for(i=0;i<t;i++)
        printf("%d\n",answer[i]);
    return 0;
}
