#include<stdio.h>
int main(void)
{
    int i,t,a,b,c,r,max,min;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&r);
        max=a<b?b:a;
        min=a+b-max;
        if((a==b)||(a<=c+r&&a>=c-r&&b<=c+r&&b>=c-r))
            printf("%d\n",0);
        else if(max<=c+r&&max>=c-r)
            printf("%d\n",(max-min+1)-(max-(c-r)+1));
        else if(min<=c+r&&min>=c-r)
            printf("%d\n",(max-min+1)-((c+r)-min+1));
        else if(c+r>=min&&c+r<=max&&c-r>=min&&c-r<=max)
            printf("%d\n",(max-min+1)-(2*c+1));
        else
            printf("%d\n",(max-min+1));
    }
    return 0;
}
