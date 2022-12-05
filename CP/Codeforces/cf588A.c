#include<stdio.h>
int main(void)
{
    int i,k,n,price_now,need_now,price_prev=1001,need_prev,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&need_now,&price_now);
        if(i%2==0)
        {
            need_prev=need_now;
            if(price_prev>price_now)
                price_prev=price_now;
            k=1;
        }
        else
        {
            if(price_prev<price_now)
                total+=price_prev*(need_prev+need_now);
            else
            {
                total+=price_prev*need_prev+need_now*price_now;
                price_prev=price_now;
            }
            k=0;
        }

    }
    if(k)
        total+=price_prev*need_prev;
    printf("%d",total);
    return 0;
}
