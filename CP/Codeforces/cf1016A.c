#include<stdio.h>
int main(void)
{
    int i,n;
    long int left=0,pages,m,a;
    scanf("%d %ld",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        if(!left)
        {
            pages=a/m;
            if(!(a%m))
                left=0;
            else
                left=m-(a%m);
        }
        else
        {
            if(left<=a)
            {
                pages=1;
                left=a-left;
                pages+=left/m;
                if(!(left%m))
                    left=0;
                else
                    left=m-(left%m);
            }
            else
            {
                pages=0;
                left-=a;
            }
        }
        printf("%d ",pages);
    }
    return 0;
}
