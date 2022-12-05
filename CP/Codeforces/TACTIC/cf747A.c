#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,k,a,b,x=0,y=0,max,min;
    scanf("%d",&n);
    k=sqrt(n);
    if(n%k==0)
        printf("%d %d\n",k,n/k);
    else
    {
        for(i=1;i<=k;i++)
        {
            if(n%i==0)
            {
                a=i;
                b=n/i;
                max=a>b?a:b;
                min=a<b?a:b;
                if((x==0)||((x-y)>(max-min)))
                {
                    x=max;
                    y=min;
                }
            }
        }
        if(x==0)
            printf("%d %d\n",1,n);
        else
            printf("%d %d\n",y,x);
    }
    return 0;
}
