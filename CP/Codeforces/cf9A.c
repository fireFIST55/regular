#include<stdio.h>
int main(void)
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    a=(6-max)+1;
    if(6%a==0)
    {
        printf("%d/%d\n",1,6/a);
    }
    else
    {
        max=a;
        for(a-=1;a>=1;a--)
        {
            if(6%a==0&&max%a==0)
            {
                break;
            }
        }
        printf("%d/%d\n",max/a,6/a);
    }
    return 0;
}
