#include<stdio.h>
int main(void)
{
    int i,n;
    long long int k,f,t,fun,max;
    scanf("%d %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&f,&t);
        if(t>k)
            fun=f-(t-k);
        else
            fun=f;
        if(!i)
            max=fun;
        else
            max=fun>max?fun:max;
    }
    printf("%lld\n",max);
    return 0;
}
