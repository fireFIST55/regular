#include<stdio.h>
int main(void)
{
    int i,t;
    scanf("%d",&t);
    long long int r,g,b,max,sum;
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&r,&g,&b);
        sum=0;
        if(r==g&&g==b)
            printf("Yes\n");
        else
        {
            max=r>g?r>b?r:b:g>b?g:b;
            sum=r+g+b-max;
            if(sum>=max)
                printf("Yes\n");
            else if(max-1<sum)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
