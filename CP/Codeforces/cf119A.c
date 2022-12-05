#include<stdio.h>
int gcd(int a,int n);
int main(void)
{
    int a,b,n,i,x,max,min;
    scanf("%d %d %d",&a,&b,&n);
    for(i=0;n>0;i++)
    {
        if(i%2==0)
        {
             n=gcd(a,n);
             if(n==0)
             {
                 printf("0\n");
                 return 0;
             }
        }
        else if(i%2!=0)
        {
            n=gcd(b,n);
            if(n==0)
            {
                printf("1\n");
                return 0;
            }
        }
    }
}
int gcd(int a,int n)
{
    int i,max,min,x;
    max=n>a?n:a;
    min=n<a?n:a;
    if(max%min==0)
    {
        n-=min;
        if(n==0)
        {
            return 0;
        }
        else
        {
            return n;
        }
    }
    else
    {
        x=min;
        for(min-=1;min>0;min--)
        {
            if(n%min==0&&a%min==0&&x%min==0)
            {
                n-=min;
                if(n==0)
                {
                    return 0;
                }
                else
                    return n;
            }
        }
    }
}
