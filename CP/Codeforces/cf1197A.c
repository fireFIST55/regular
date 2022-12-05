#include<stdio.h>
int main(void)
{
    int i,j,t,min,n,x,y,a,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0,x=0,y=0;j<n;j++)
        {
            scanf("%d",&a);
            if(x<a)
            {
                if(y<x)
                    y=x;
                x=a;
            }
            else if(y<a)
                y=a;
        }
        if(y>1&&n>2)
        {
            min=y-1<n-2?y-1:n-2;
            printf("%d\n",min);
        }
        else
            printf("%d\n",0);
    }
    return 0;
}
