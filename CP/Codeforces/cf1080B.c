#include<stdio.h>
int main(void)
{
    int i,q;
    long long int total,r,l;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%lld %lld",&l,&r);
        if(!(l&1)&&!(r&1))
            printf("%lld",r-(r-l)/2);
        else if(!(l&1)&&(r&1))
            printf("%lld\n",-((r-l)/2+1));
        else if((l&1)&&(r&1))
            printf("%lld\n",-(r-(r-l)/2));
        else
            printf("%lld\n",(r-l)/2+1);
    }
    return 0;
}
