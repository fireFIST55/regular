#include<stdio.h>
int main(void)
{
    int i,q,a,b;
    scanf("%d",&q);
    long long int answers[q],n,min,burles_a,burles_b;
    for(i=0;i<q;i++)
    {
        scanf("%lld %d %d",&n,&a,&b);
        if(n%2==0)
        {
            burles_a=n*a;
            burles_b=(n/2)*b;
            min=burles_a<burles_b?burles_a:burles_b;
        }
        else
        {
            burles_a=n*a;
            burles_b=(n/2)*b+(n%2)*a;
            min=burles_a<burles_b?burles_a:burles_b;
        }
        answers[i]=min;
    }
    for(i=0;i<q;i++)
    {
        printf("%lld\n",answers[i]);
    }
    return 0;
}
