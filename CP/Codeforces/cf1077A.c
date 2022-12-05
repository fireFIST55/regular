#include<stdio.h>
int main(void)
{
    long long int a,b,i,k,t;
    scanf("%lld",&t);
    long long int answers[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2==0)
        {
            answers[i]=(k/2)*a-b*(k/2);
        }
        else
        {
            answers[i]=(k/2+1)*a-b*(k/2);
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",answers[i]);
    }
    return 0;
}
